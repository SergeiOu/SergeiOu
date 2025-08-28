/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergei <sergei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 19:40:38 by sergei            #+#    #+#             */
/*   Updated: 2025/08/27 20:34:28 by sergei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(int *a, int topa)
{
	int i;

	i = 0;
	while (i < topa)
	{
		if (a[i] > a[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi(const char *str, int *error)
{
	long	res;
	int		sign;

	res = 0;
	sign = 1;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			sign = -1;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		if ((res * sign) > 2147483647 || (res * sign) < -2147483648)
			*error = 1;
		str++;
	}
	if (*str != '\0')
		*error = 1;
	return ((int)(res * sign));
}

int	check_duplicate(int *arr, int size)
{
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] == arr[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	error_exit(void)
{
	write(2, "Error\n", 6);
	exit(1);
}