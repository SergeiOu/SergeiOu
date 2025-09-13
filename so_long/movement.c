/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergei <sergei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 20:34:00 by sergei            #+#    #+#             */
/*   Updated: 2025/09/08 20:40:06 by sergei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int key_hook(int keycode, void *param)
{
    t_game *g = (t_game *)param;

    if (keycode == KEY_W)
        g->player_y -= 1;
    else if (keycode == KEY_S)
        g->player_y += 1;
    else if (keycode == KEY_A)
        g->player_x -= 1;
    else if (keycode == KEY_D)
        g->player_x += 1;
    else if (keycode == KEY_ESC)
        close_game(g);
    render_map(g);
    return (0);
}