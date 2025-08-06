/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sounania <sounania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:58:40 by sounania          #+#    #+#             */
/*   Updated: 2025/05/29 12:17:50 by sounania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <unistd.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*r;

	i = 0;
	p = (unsigned char *)src;
	r = (unsigned char *)dest;
	while (i < n)
	{
		r[i] = p[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char src[] = "abcd";
// 	char dst[5];
// 	ft_memcpy(dst, src, 5);
// 	write(1, dst, 4);
// 	return (0);
// }