/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sounania <sounania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 12:25:39 by sounania          #+#    #+#             */
/*   Updated: 2025/05/28 19:12:38 by sounania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
// #include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;
	const char	*p;

	i = 0;
	p = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			p = &s[i];
		}
		i++;
	}
	if (c == '\0')
	{
		return ((char *)&s[i]);
	}
	return ((char *)p);
}

// int main(void)
// {
//     char *str = "Hello there!";
//     char *res = ft_strrchr(str, 'e');
//     printf("%s\n", res);
// }