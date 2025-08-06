/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sounania <sounania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 14:04:12 by sounania          #+#    #+#             */
/*   Updated: 2025/05/29 13:33:51 by sounania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
// #include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (little[0] == '\0')
	{
		return ((char *)big);
	}
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while (little[j] != '\0' && big[i + j] != '\0'
			&& i + j < len && big[i + j] == little[j])
		{
			j++;
		}
		if (little[j] == '\0')
		{
			return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

// int main(void)
// {
//     char *str = "Hello there!";
//     char *found = ft_strnstr(str, "the", 10);
//     printf("%s\n", found);
// }