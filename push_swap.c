/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergei <sergei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 11:15:00 by sounania          #+#    #+#             */
/*   Updated: 2025/08/27 20:41:50 by sergei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	index_stack(int *a, int size)
{
	int *sorted;
	int i;
	int j;

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
				int tmp = sorted[i];
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

void	radix_sort(int *a, int *b, int *topa, int *topb, int size)
{
	int	max_num;
	int	max_bits;
	int	i;
	int	j;
	int	count;

	max_num = size - 1;
	max_bits = 0;
	while ((max_num >> max_bits) != 0)
		max_bits++;
	i = 0;
	while (i < max_bits)
	{
		count = size; // always full size at start of bit
		j = 0;
		while (j < count)
		{
			if (((a[0] >> i) & 1) == 1)
				ra(a, *topa);
			else
				pb(a, topa, b, topb);
			j++;
		}
		while (*topb >= 0)
			pa(a, topa, b, topb);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int *a;
	int *b;
	int topa;
	int topb;
	int size;
	int i;
	int error;

	if (argc < 2)
		return (0);
	size = argc - 1;
	a = malloc(size * sizeof(int));
	b = malloc(size * sizeof(int));
	if (!a || !b)
		error_exit();
	topa = size - 1;
	topb = -1;
	error = 0;
	i = 1;
	while (i < argc)
	{
		a[i - 1] = ft_atoi(argv[i], &error);
		if (error)
			error_exit();
		i++;
	}
	if (check_duplicate(a, size))
		error_exit();

	index_stack(a, size);

	// Reverse array so top = index 0
	i = 0;
	while (i < size / 2)
	{
		int tmp = a[i];
		a[i] = a[size - 1 - i];
		a[size - 1 - i] = tmp;
		i++;
	}

	if (!is_sorted(a, topa))
		radix_sort(a, b, &topa, &topb, size);

	free(a);
	free(b);
	return (0);
}