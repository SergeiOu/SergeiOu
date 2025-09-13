/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergei <sergei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 19:41:14 by sergei            #+#    #+#             */
/*   Updated: 2025/09/13 19:41:21 by sergei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"


int on_close(void *param)
{
t_game *g;
int y;
g = (t_game *)param;
if (g->win) mlx_destroy_window(g->mlx, g->win);
free_textures(g);
y = 0;
while (g->map && g->map[y]) { free(g->map[y]); y++; }
if (g->map) free(g->map);
mlx_destroy_display(g->mlx);
free(g->mlx);
exit(0);
}
