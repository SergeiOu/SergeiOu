/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sounania <sounania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 08:30:28 by sounania          #+#    #+#             */
/*   Updated: 2025/05/28 19:12:31 by sounania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>
// #include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		copylen;
	char		*p;

	i = 0;
	if (start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	else if (ft_strlen(s) - start < len)
		copylen = ft_strlen(s) - start;
	else
		copylen = len;
	p = malloc(copylen + 1);
	if (!p)
	{
		return (NULL);
	}
	while (i < copylen)
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

// int main(void)
// {
//     char *sub = ft_substr("Hello World", 6, 5);
//     printf("%s\n", sub);
//     free(sub);
// }