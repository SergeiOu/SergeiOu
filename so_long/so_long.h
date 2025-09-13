/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergei <sergei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 19:37:54 by sergei            #+#    #+#             */
/*   Updated: 2025/09/13 19:44:30 by sergei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H


# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <mlx.h>


# define TILE 64


/* Linux/X11 keycodes */
# define KEY_ESC 65307
# define KEY_LEFT 65361
# define KEY_UP 65362
# define KEY_RIGHT 65363
# define KEY_DOWN 65364
# define KEY_A 97
# define KEY_S 115
# define KEY_D 100
# define KEY_W 119


# define EVENT_DESTROY 17


typedef struct s_img {
void *img;
char *data;
int bpp;
int line_len;
int endian;
int w;
int h;
} t_img;


typedef struct s_tex {
t_img floor;
t_img wall;
t_img exit_;
t_img collect;
t_img player;
} t_tex;


typedef struct s_game {
void *mlx;
void *win;
char **map;
int rows;
int cols;
int px;
int py;
int collectibles;
int moves;
t_tex tex;
} t_game;
/* error */
void die(const char *msg);
void die_perror(const char *ctx);


/* utils: memory / string */
void *sl_calloc(size_t n, size_t sz);
size_t sl_strlen(const char *s);
char *sl_strdup(const char *s);
char *sl_strjoin_free(char *a, const char *b);
int sl_strcmp(const char *a, const char *b);


/* utils: split and matrix */
char **sl_split_lines(const char *s);
void sl_free_matrix(char **m);
size_t sl_matrix_len(char **m);


/* map */
char **map_read(const char *path);
int map_validate_basic(char **map, int *rows, int *cols, int *px, int *py, int *collect);
int map_pathcheck(char **map, int rows, int cols, int px, int py, int collect);


/* movement */
int key_hook(int key, void *param);
int can_step_on(t_game *g, int nx, int ny);
void try_move_player(t_game *g, int dx, int dy)
{
int nx; int ny; char t;
nx = g->px + dx; ny = g->py + dy;
if (!can_step_on(g, nx, ny)) return ;
t = g->map[ny][nx];
if (t == 'C') { g->collectibles--; g->map[ny][nx] = '0'; }
g->px = nx; g->py = ny;
g->moves++;
printf("Moves: %d
", g->moves);
if (t == 'E' && g->collectibles == 0) on_close(g);
render_map(g);
}


int key_hook(int key, void *param)
{
t_game *g;
g = (t_game *)param;
if (key == KEY_ESC) return (on_close(g));
if (key == KEY_W || key == KEY_UP) try_move_player(g, 0, -1);
if (key == KEY_S || key == KEY_DOWN) try_move_player(g, 0, 1);
if (key == KEY_A || key == KEY_LEFT) try_move_player(g, -1, 0);
if (key == KEY_D || key == KEY_RIGHT) try_move_player(g, 1, 0);
return (0);
}