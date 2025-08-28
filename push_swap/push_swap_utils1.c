/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sounania <sounania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 10:18:49 by sergei            #+#    #+#             */
/*   Updated: 2025/08/28 09:37:10 by sounania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(int *a, int topa)
{
	ra_op(a, topa);
	write(1, "ra\n", 3);
}

void	rb(int *b, int topb)
{
	rb_op(b, topb);
	write(1, "rb\n", 3);
}

void	rr(int *a, int topa, int *b, int topb)
{
	ra_op(a, topa);
	rb_op(b, topb);
	write(1, "rr\n", 3);
}

void	rra(int *a, int topa)
{
	rra_op(a, topa);
	write(1, "rra\n", 4);
}

void	rrb(int *b, int topb)
{
	rrb_op(b, topb);
	write(1, "rrb\n", 4);
}
