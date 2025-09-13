/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergei <sergei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 19:40:26 by sergei            #+#    #+#             */
/*   Updated: 2025/09/13 19:40:29 by sergei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"


static void put_tile(t_game *g, t_img *img, int x, int y)
{
mlx_put_image_to_window(g->mlx, g->win, img->img, x * TILE, y * TILE);
}


void render_map(t_game *g)
{
int y; int x; char t;
y = 0;
while (y < g->rows)
{
x = 0;
while (x < g->cols)
{
put_tile(g, &g->tex.floor, x, y);
t = g->map[y][x];
if (t == '1') put_tile(g, &g->tex.wall, x, y);
if (t == 'C') put_tile(g, &g->tex.collect, x, y);
if (t == 'E') put_tile(g, &g->tex.exit_, x, y);
x++;
}
y++;
}
put_tile(g, &g->tex.player, g->px, g->py);
}