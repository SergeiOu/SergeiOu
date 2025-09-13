/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergei <sergei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 19:41:28 by sergei            #+#    #+#             */
/*   Updated: 2025/09/13 19:41:37 by sergei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"


static void init_player_and_counts(t_game *g, int px, int py, int collect)
{
g->px = px; g->py = py; g->collectibles = collect; g->moves = 0;
}


static void set_window_size(t_game *g)
{
int ww; int wh;
ww = g->cols * TILE; wh = g->rows * TILE;
g->win = mlx_new_window(g->mlx, ww, wh, "so_long");
if (!g->win) die("mlx_new_window failed");
}


static void hooks(t_game *g)
{
mlx_key_hook(g->win, key_hook, g);
mlx_hook(g->win, EVENT_DESTROY, 0, on_close, g);
}


int main(int ac, char **av)
{
t_game g; int px; int py; int ok; int collect;
if (ac != 2) die("Usage: ./so_long map.ber");
g.mlx = mlx_init();
if (!g.mlx) die("mlx_init failed");
g.map = map_read(av[1]);
ok = map_validate_basic(g.map, &g.rows, &g.cols, &px, &py, &collect);
if (!ok) die("Invalid map");
ok = map_pathcheck(g.map, g.rows, g.cols, px, py, collect);
if (!ok) die("Unsolvable map");
init_player_and_counts(&g, px, py, collect);
set_window_size(&g);
if (!load_textures(&g)) die("Failed to load textures");
hooks(&g);
render_map(&g);
mlx_loop(g.mlx);
return (0);
}