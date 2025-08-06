/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sounania <sounania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 15:48:48 by sounania          #+#    #+#             */
/*   Updated: 2025/05/29 13:34:33 by sounania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
// #include <stdio.h>

char	*ft_strdup(const char *s)
{
	int		i;
	char	*p;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	p = malloc(i + 1);
	if (!p)
	{
		return (NULL);
	}
	i = 0;
	while (s[i] != '\0')
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

// int	main(void)
// {
// 	char	*original = "42 school";
// 	char	*copy = ft_strdup(original);

// 	printf("Copy: %s\n", copy);
// 	// free(copy);
// 	return (0);
// }