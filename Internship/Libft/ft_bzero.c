/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sounania <sounania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:53:20 by sounania          #+#    #+#             */
/*   Updated: 2025/05/28 18:56:33 by sounania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
// #include <stdio.h>
// #include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}

// int main(void)
// {
//     char buffer[10] = "abcdef";
//     ft_bzero(buffer + 2, 3);
//     for (int i = 0; i < 10; i++)
//         printf("%c ", buffer[i] ? buffer[i] : '0');
//     return (0);
// }