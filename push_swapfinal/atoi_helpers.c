/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_helpers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergei <sergei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 10:18:19 by sounania          #+#    #+#             */
/*   Updated: 2025/09/13 20:26:37 by sergei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	skip_whitespace(const char **str)
{
	int	count = 0;
	while (**str == ' ' || (**str >= 9 && **str <= 13))
	{
		(*str)++;
		count++;
	}
	return count;
}

int	handle_sign(const char **str)
{
	int	sign = 1;
	if (**str == '+' || **str == '-')
	{
		if (**str == '-')
			sign = -1;
		(*str)++;
	}
	return sign;
}

int	check_digit(char c, int *error)
{
	if (c < '0' || c > '9')
	{
		*error = 1;
		return 0;
	}
	return 1;
}

int	check_overflow(long res, int digit, int *error)
{
	if (res > (2147483647 - digit) / 10)
	{
		*error = 1;
		return 1;
	}
	return 0;
}

int	ft_atoi(const char *str, int *error)
{
	long	res;
	int		sign;

	res = 0;
	sign = 1;
	*error = 0;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	if (*str < '0' || *str > '9')
	{
		*error = 1;
		return 0;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (res > (2147483647 - (*str - '0')) / 10)
		{
			*error = 1;
			return 0;
		}
		res = res * 10 + (*str - '0');
		str++;
	}
	// if (*str != '\0')
	// {
	// 	*error = 1;
	// 	return 0;
	// }
	return (int)(res * sign);
}
