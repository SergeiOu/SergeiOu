/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sounania <sounania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 13:09:13 by sounania          #+#    #+#             */
/*   Updated: 2025/05/28 19:27:28 by sounania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
// #include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*p;
	unsigned int	len;

	i = 0;
	len = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	p = malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	while (i < len)
	{
		p[i] = f (i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}

// char	map_test(unsigned int i, char c)
// {
// 	return (c + i);
// }

// int main(void)
// {
//     char *result = ft_strmapi("aaaaa", map_test);
//     printf("%s\n", result);
//     free(result);
// }