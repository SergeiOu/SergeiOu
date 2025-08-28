/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sounania <sounania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:02:32 by sounania          #+#    #+#             */
/*   Updated: 2025/06/10 14:22:50 by sounania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
void	print_hex(unsigned long n);
void	print_hex_upper(unsigned long n);
void	print_number(int n);
void	print_unsigned_number(unsigned int n);
int		hex_len(unsigned long n);
int		num_len(int n);
int		num_unsigned_len(unsigned int n);
int		handle_string(va_list ap);
int		handle_pointer(va_list ap);
int		handle_int(va_list ap);
int		handle_unsigned(va_list ap);
int		handle_hex_lower(va_list ap);
int		handle_hex_upper(va_list ap);

#endif
