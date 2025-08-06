/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_handlers.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sounania <sounania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 14:21:07 by sounania          #+#    #+#             */
/*   Updated: 2025/06/16 12:56:22 by sounania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_string(va_list ap)
{
	char	*s;
	int		count;

	count = 0;
	s = va_arg(ap, char *);
	if (!s)
		s = "(null)";
	while (s[count])
	{
		write(1, &s[count], 1);
		count++;
	}
	return (count);
}

int	handle_pointer(va_list ap)
{
	void			*ptr;
	unsigned long	addr;
	int				count;

	ptr = va_arg(ap, void *);
	if (!ptr)
		return (write(1, "(nil)", 5));
	addr = (unsigned long)ptr;
	write(1, "0x", 2);
	count = 2;
	print_hex(addr);
	count += hex_len(addr);
	return (count);
}

int	handle_int(va_list ap)
{
	int	n;
	int	count;

	n = va_arg(ap, int);
	count = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
		count++;
	}
	print_number(n);
	count += num_len(n);
	return (count);
}

int	handle_unsigned(va_list ap)
{
	unsigned int	n;

	n = va_arg(ap, unsigned int);
	print_unsigned_number(n);
	return (num_unsigned_len(n));
}

int	handle_hex_lower(va_list ap)
{
	unsigned int	n;

	n = va_arg(ap, unsigned int);
	print_hex(n);
	return (hex_len(n));
}
