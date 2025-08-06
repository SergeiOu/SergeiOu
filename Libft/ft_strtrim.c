/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sounania <sounania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 09:22:00 by sounania          #+#    #+#             */
/*   Updated: 2025/05/29 15:29:27 by sounania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>
// #include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*p;

	start = 0;
	i = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	p = malloc(end - start + 1);
	if (!p)
		return (NULL);
	while (start < end)
	{
		p[i] = s1[start];
		i++;
		start++;
	}
	p[i] = '\0';
	return (p);
}

// int main(void)
// {
//     char *trimmed = ft_strtrim("   hello world   ", " ");
//     printf("'%s'\n", trimmed);
//     free(trimmed);
// }