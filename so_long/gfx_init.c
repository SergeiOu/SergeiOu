/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gfx_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergei <sergei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 19:40:58 by sergei            #+#    #+#             */
/*   Updated: 2025/09/13 19:41:07 by sergei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"


static int load_one(t_game *g, t_img *img, const char *path)
{
img->img = mlx_xpm_file_to_image(g->mlx, (char *)path, &img->w, &img->h);
if (!img->img) return (0);
img->data = mlx_get_data_addr(img->img, &img->bpp, &img->line_len, &img->endian);
return (1);
}


int load_textures(t_game *g)
{
int ok;
ok = 1;
ok = ok && load_one(g, &g->tex.floor, "assets/floor.xpm");
ok = ok && load_one(g, &g->tex.wall, "assets/wall.xpm");
ok = ok && load_one(g, &g->tex.exit_, "assets/exit.xpm");
ok = ok && load_one(g, &g->tex.collect, "assets/collect.xpm");
ok = ok && load_one(g, &g->tex.player, "assets/player.xpm");
return (ok);
}


void free_textures(t_game *g)
{
if (g->tex.floor.img) mlx_destroy_image(g->mlx, g->tex.floor.img);
if (g->tex.wall.img) mlx_destroy_image(g->mlx, g->tex.wall.img);
if (g->tex.exit_.img) mlx_destroy_image(g->mlx, g->tex.exit_.img);
if (g->tex.collect.img) mlx_destroy_image(g->mlx, g->tex.collect.img);
if (g->tex.player.img) mlx_destroy_image(g->mlx, g->tex.player.img);
}
