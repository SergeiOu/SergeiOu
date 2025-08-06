/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sounania <sounania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 13:24:06 by sounania          #+#    #+#             */
/*   Updated: 2025/06/18 12:16:17 by sounania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

static int	handle_char(va_list ap)
{
	char	c;

	c = (char)va_arg(ap, int);
	write(1, &c, 1);
	return (1);
}
static int	handle_percent(void)
{
	write(1, "%", 1);
	return (1);
}
static int	handle_format(const char *format, int i, va_list ap)
{
	if (format[i + 1] == 'c')
		return (handle_char(ap));
	else if (format[i + 1] == 's')
		return (handle_string(ap));
	else if (format[i + 1] == 'p')
		return (handle_pointer(ap));
	else if (format[i + 1] == 'd' || format[i + 1] == 'i')
		return (handle_int(ap));
	else if (format[i + 1] == 'u')
		return (handle_unsigned(ap));
	else if (format[i + 1] == 'x')
		return (handle_hex_lower(ap));
	else if (format[i + 1] == 'X')
		return (handle_hex_upper(ap));
	else if (format[i + 1] == '%')
		return (handle_percent());
	return (0);
}
int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			count += handle_format(format, i, ap);
			i += 2;
		}
		else
		{
			write(1, &format[i], 1);
			count++;
			i++;
		}
	}
	va_end(ap);
	return (count);
}
int main(void)
{
    int ret1, ret2;

    printf("=== Testing ft_printf vs printf ===\n\n");

    // Test %c - character
    printf("Testing %%c:\n");
    ret1 = printf("Original: [%c]\n", 'A');
    ret2 = ft_printf("ft_printf: [%c]\n", 'A');
    printf("Return values - printf: %d, ft_printf: %d\n\n", ret1, ret2);

    // Test %s - string
    printf("Testing %%s:\n");
    ret1 = printf("Original: [%s]\n", "Hello World");
    ret2 = ft_printf("ft_printf: [%s]\n", "Hello World");
    printf("Return values - printf: %d, ft_printf: %d\n\n", ret1, ret2);

    // Test %p - pointer
    printf("Testing %%p:\n");
    int x = 42;
    ret1 = printf("Original: [%p]\n", &x);
    ret2 = ft_printf("ft_printf: [%p]\n", &x);
    printf("Return values - printf: %d, ft_printf: %d\n\n", ret1, ret2);

    // Test %d - signed decimal
    printf("Testing %%d:\n");
    ret1 = printf("Original: [%d]\n", -123);
    ret2 = ft_printf("ft_printf: [%d]\n", -123);
    printf("Return values - printf: %d, ft_printf: %d\n\n", ret1, ret2);

    // Test %i - signed integer
    printf("Testing %%i:\n");
    ret1 = printf("Original: [%i]\n", INT_MIN);
    ret2 = ft_printf("ft_printf: [%i]\n", INT_MIN);
    printf("Return values - printf: %d, ft_printf: %d\n\n", ret1, ret2);

    // Test %u - unsigned decimal
    printf("Testing %%u:\n");
    ret1 = printf("Original: [%u]\n", 4294967295U);
    ret2 = ft_printf("ft_printf: [%u]\n", 4294967295U);
    printf("Return values - printf: %d, ft_printf: %d\n\n", ret1, ret2);

    // Test %x - lowercase hex
    printf("Testing %%x:\n");
    ret1 = printf("Original: [%x]\n", 255);
    ret2 = ft_printf("ft_printf: [%x]\n", 255);
    printf("Return values - printf: %d, ft_printf: %d\n\n", ret1, ret2);

    // Test %X - uppercase hex
    printf("Testing %%X:\n");
    ret1 = printf("Original: [%X]\n", 255);
    ret2 = ft_printf("ft_printf: [%X]\n", 255);
    printf("Return values - printf: %d, ft_printf: %d\n\n", ret1, ret2);

    // Test %% - literal percent
    printf("Testing %%%%:\n");
    ret1 = printf("Original: [%%]\n");
    ret2 = ft_printf("ft_printf: [%%]\n");
    printf("Return values - printf: %d, ft_printf: %d\n\n", ret1, ret2);

    // Additional edge case tests
    printf("=== Edge Case Tests ===\n");

    // Zero values
    printf("Testing zeros:\n");
    printf("Original: d=%d, i=%i, u=%u, x=%x, X=%X\n", 0, 0, 0U, 0, 0);
    ft_printf("ft_printf: d=%d, i=%i, u=%u, x=%x, X=%X\n", 0, 0, 0U, 0, 0);

    // NULL string test (commented out due to compiler warnings)
    // Uncomment these if your implementation handles NULL gracefully
    
    // printf("\nTesting NULL string:\n");
    // printf("Original: [%s]\n", (char *)NULL);
    // ft_printf("ft_printf: [%s]\n", (char *)NULL);
    

    return 0;
}