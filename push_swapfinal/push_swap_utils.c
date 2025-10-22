/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sounania <sounania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 10:17:36 by sergei            #+#    #+#             */
/*   Updated: 2025/08/28 09:26:39 by sounania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(int *a, int topa)
{
	if (topa < 1)
		return ;
	swap(&a[0], &a[1]);
	write(1, "sa\n", 3);
}

void	sb(int *b, int topb)
{
	if (topb < 1)
		return ;
	swap(&b[0], &b[1]);
	write(1, "sb\n", 3);
}

void	ss(int *a, int topa, int *b, int topb)
{
	if (topa > 0)
		swap(&a[0], &a[1]);
	if (topb > 0)
		swap(&b[0], &b[1]);
	write(1, "ss\n", 3);
}

void	pa(int *a, int *topa, int *b, int *topb)
{
	int	i;

	if (*topb < 0)
		return ;
	(*topa)++;
	i = *topa;
	while (i > 0)
	{
		a[i] = a[i - 1];
		i--;
	}
	a[0] = b[0];
	i = 0;
	while (i < *topb)
	{
		b[i] = b[i + 1];
		i++;
	}
	(*topb)--;
	write(1, "pa\n", 3);
}

void	pb(int *a, int *topa, int *b, int *topb)
{
	int	i;

	if (*topa < 0)
		return ;
	(*topb)++;
	i = *topb;
	while (i > 0)
	{
		b[i] = b[i - 1];
		i--;
	}
	b[0] = a[0];
	i = 0;
	while (i < *topa)
	{
		a[i] = a[i + 1];
		i++;
	}
	(*topa)--;
	write(1, "pb\n", 3);
}
