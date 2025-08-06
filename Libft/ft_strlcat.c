/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sounania <sounania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 16:45:38 by sounania          #+#    #+#             */
/*   Updated: 2025/05/28 19:04:56 by sounania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
// #include <stdio.h>
// #include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	lend;

	i = 0;
	j = 0;
	lend = ft_strlen(dest);
	while (dest[i] != '\0')
	{
		i++;
	}
	if (size <= lend)
	{
		return (size + ft_strlen(src));
	}
	while (j < size - lend - 1 && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (lend + ft_strlen(src));
}

// int main(void)
// {
//     char dst[20] = "Hi ";
//     char *src = "there!";
//     size_t result = ft_strlcat(dst, src, sizeof(dst));
//     printf("Result: %lu, Final String: %s\n", result, dst);
// }