/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_helpers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sounania <sounania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 09:27:26 by sounania          #+#    #+#             */
/*   Updated: 2025/08/28 09:35:50 by sounania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(int *x, int *y)
{
	int	tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

void	ra_op(int *a, int topa)
{
	int	i;
	int	tmp;

	if (topa < 1)
		return ;
	tmp = a[0];
	i = 0;
	while (i < topa)
	{
		a[i] = a[i + 1];
		i++;
	}
	a[topa] = tmp;
}

void	rb_op(int *b, int topb)
{
	int	i;
	int	tmp;

	if (topb < 1)
		return ;
	tmp = b[0];
	i = 0;
	while (i < topb)
	{
		b[i] = b[i + 1];
		i++;
	}
	b[topb] = tmp;
}

void	rra_op(int *a, int topa)
{
	int	i;
	int	tmp;

	if (topa < 1)
		return ;
	tmp = a[topa];
	i = topa;
	while (i > 0)
	{
		a[i] = a[i - 1];
		i--;
	}
	a[0] = tmp;
}

void	rrb_op(int *b, int topb)
{
	int	i;
	int	tmp;

	if (topb < 1)
		return ;
	tmp = b[topb];
	i = topb;
	while (i > 0)
	{
		b[i] = b[i - 1];
		i--;
	}
	b[0] = tmp;
}
