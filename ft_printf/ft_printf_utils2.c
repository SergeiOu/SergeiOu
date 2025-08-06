/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sounania <sounania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 14:22:15 by sounania          #+#    #+#             */
/*   Updated: 2025/06/16 12:59:55 by sounania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	num_len(int n)
{
	int	len;

	len = 1;
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int	num_unsigned_len(unsigned int n)
{
	int	len;

	len = 1;
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int	handle_hex_upper(va_list ap)
{
	unsigned int	n;

	n = va_arg(ap, unsigned int);
	print_hex_upper(n);
	return (hex_len(n));
}
int	handle_char(va_list ap)
{
	char	c;

	c = (char)va_arg(ap, int);
	write(1, &c, 1);
	return (1);
}

int	handle_percent(void)
{
	write(1, "%", 1);
	return (1);
}