/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sounania <sounania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 13:52:28 by sounania          #+#    #+#             */
/*   Updated: 2025/05/28 19:13:31 by sounania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
// #include <unistd.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*t;

	p = (unsigned char *)s1;
	t = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p[i] != t[i])
		{
			return (p[i] - t[i]);
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char a[] = "abc";
// 	char b[] = "abd";
// 	char c = ft_memcmp(a, b, 3) + '0';
// 	write(1, &c, 1);
// 	return (0);
// }