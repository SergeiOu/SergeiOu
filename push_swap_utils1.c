/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergei <sergei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 10:18:49 by sergei            #+#    #+#             */
/*   Updated: 2025/08/27 20:32:58 by sergei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ra(int *a, int topa)
{
	int i;
	int temp;

	if (topa < 1)
		return ;
	temp = a[0];
	i = 0;
	while (i < topa)
	{
		a[i] = a[i + 1];
		i++;
	}
	a[topa] = temp;
}

void rb(int *b, int topb)
{
	int i;
	int temp;

	if (topb < 1)
		return ;
	temp = b[0];
	i = 0;
	while (i < topb)
	{
		b[i] = b[i + 1];
		i++;
	}
	b[topb] = temp;
}

void rr(int *a, int topa, int *b, int topb)
{
	ra(a, topa);
	rb(b, topb);
}

void rra(int *a, int topa)
{
	int i;
	int temp;

	if (topa < 1)
		return ;
	temp = a[topa];
	i = topa;
	while (i > 0)
	{
		a[i] = a[i - 1];
		i--;
	}
	a[0] = temp;
}

void rrb(int *b, int topb)
{
	int i;
	int temp;

	if (topb < 1)
		return ;
	temp = b[topb];
	i = topb;
	while (i > 0)
	{
		b[i] = b[i - 1];
		i--;
	}
	b[0] = temp;
}