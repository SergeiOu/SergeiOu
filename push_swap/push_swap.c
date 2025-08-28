/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sounania <sounania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 11:15:00 by sounania          #+#    #+#             */
/*   Updated: 2025/08/28 10:23:16 by sounania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(int *a, int topa, int *b, int topb)
{
	rra_op(a, topa);
	rrb_op(b, topb);
	write(1, "rrr\n", 4);
}

static void	index_stack(int *a, int size)
{
	int	*sorted;
	int	i;
	int	j;

	sorted = malloc(size * sizeof(int));
	if (!sorted)
		error_exit();
	i = 0;
	while (i < size)
	{
		sorted[i] = a[i];
		i++;
	}
	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (sorted[i] > sorted[j])
			{
				int	tmp;
				tmp = sorted[i];
				sorted[i] = sorted[j];
				sorted[j] = tmp;
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (a[i] == sorted[j])
			{
				a[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
	free(sorted);
}

void	radix_sort(t_stacks *s)
{
	int	max_bits;
	int	i;
	int	j;

	max_bits = 0;
	while ((s->size - 1) >> max_bits)
		max_bits++;
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < s->size)
		{
			if (((s->a[0] >> i) & 1) == 1)
				ra(s->a, s->topa);
			else
				pb(s->a, &s->topa, s->b, &s->topb);
			j++;
		}
		while (s->topb >= 0)
			pa(s->a, &s->topa, s->b, &s->topb);
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_stacks	s;
	int			i;
	int			error;

	if (argc < 2)
		return (0);
	s.size = argc - 1;
	s.a = malloc(s.size * sizeof(int));
	s.b = malloc(s.size * sizeof(int));
	if (!s.a || !s.b)
		error_exit();
	s.topa = s.size - 1;
	s.topb = -1;
	error = 0;
	i = 1;
	while (i < argc)
	{
		s.a[i - 1] = ft_atoi(argv[i], &error);
		if (error)
			error_exit();
		i++;
	}
	if (check_duplicate(s.a, s.size))
		error_exit();
	index_stack(s.a, s.size);
	if (!is_sorted(s.a, s.topa))
		radix_sort(&s);
	free(s.a);
	free(s.b);
	return (0);
}
