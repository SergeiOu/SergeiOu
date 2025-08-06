/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sounania <sounania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 16:08:19 by sounania          #+#    #+#             */
/*   Updated: 2025/05/29 15:06:53 by sounania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
// #include <unistd.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*r;

	p = (unsigned char *)src;
	r = (unsigned char *)dest;
	if (r < p)
	{
		i = 0;
		while (i < n)
		{
			r[i] = p[i];
			i++;
		}	
	}
	else if (r > p)
	{
		i = n;
		while (i > 0)
		{
			i--;
			r[i] = p[i];
		}	
	}
	return (dest);
}	

// int	main(void)
// {
// 	char str[] = "123456";
// 	ft_memmove(str + 2, str, 4);
// 	write(1, str, 6);
// 	return (0);
// }