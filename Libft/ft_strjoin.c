/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sounania <sounania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 08:55:51 by sounania          #+#    #+#             */
/*   Updated: 2025/05/28 19:13:05 by sounania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>
// #include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*p;

	i = 0;
	j = 0;
	p = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!p)
	{
		return (NULL);
	}
	while (i < ft_strlen(s1))
	{
		p[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	p[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	return (p);
}

// int main(void)
// {
//     char *joined = ft_strjoin("Hello, ", "World!");
//     printf("%s\n", joined);
//     free(joined);
// }