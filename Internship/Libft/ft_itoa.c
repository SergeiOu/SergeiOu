/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sounania <sounania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 14:42:36 by sounania          #+#    #+#             */
/*   Updated: 2025/05/28 19:13:38 by sounania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stddef.h>
// #include <stdio.h>

static int	count_digits(int n)
{
	int	temp;
	int	i;

	temp = n;
	i = 0;
	if (n == 0)
		return (1);
	while (temp != 0)
	{
		temp /= 10;
		i++;
	}
	return (i);
}

static void	fill_string(int n, char *p, int digits)
{
	while (--digits >= 0)
	{
		p[digits] = n % 10 + '0';
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	int		sign;
	int		digits;
	char	*p;

	sign = 1;
	digits = count_digits(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		sign = -1;
		n = -n;
	}
	p = malloc(digits + (sign == -1) + 1);
	if (!p)
		return (NULL);
	if (sign < 0)
		p[0] = '-';
	p[digits + (sign == -1)] = '\0';
	fill_string(n, p + (sign == -1), digits);
	return (p);
}

// int main(void)
// {
//     char *s = ft_itoa(-12345);
//     printf("%s\n", s);
//     free(s);
// }