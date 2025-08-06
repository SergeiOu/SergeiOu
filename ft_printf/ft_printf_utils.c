/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sounania <sounania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 14:21:53 by sounania          #+#    #+#             */
/*   Updated: 2025/06/10 14:24:02 by sounania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_hex(unsigned long n)
{
	char	hex_digit;

	hex_digit = "0123456789abcdef"[n % 16];
	if (n >= 16)
		print_hex(n / 16);
	write(1, &hex_digit, 1);
}

void	print_hex_upper(unsigned long n)
{
	char	hex_digit;

	hex_digit = "0123456789ABCDEF"[n % 16];
	if (n >= 16)
		print_hex_upper(n / 16);
	write(1, &hex_digit, 1);
}

int	hex_len(unsigned long n)
{
	int	len;

	len = 1;
	while (n >= 16)
	{
		n /= 16;
		len++;
	}
	return (len);
}

void	print_number(int n)
{
	char	digit;

	digit = '0' + (n % 10);
	if (n >= 10)
		print_number(n / 10);
	write(1, &digit, 1);
}

void	print_unsigned_number(unsigned int n)
{
	char	digit;

	digit = '0' + (n % 10);
	if (n >= 10)
		print_unsigned_number(n / 10);
	write(1, &digit, 1);
}
