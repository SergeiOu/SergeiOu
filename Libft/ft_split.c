/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sounania <sounania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 09:42:56 by sounania          #+#    #+#             */
/*   Updated: 2025/05/28 19:35:21 by sounania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>
// #include <stdio.h>

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	*next_word(char const *s, char c, size_t *i)
{
	size_t	start;
	size_t	len;

	start = *i;
	len = 0;
	while (s[start] == c)
		start++;
	while (s[start + len] && s[start + len] != c)
		len++;
	*i = start + len;
	return (ft_substr(s, start, len));
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	count;
	char	**p;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	count = count_words(s, c);
	p = malloc(sizeof(char *) * (count + 1));
	if (!p)
		return (NULL);
	while (j < count)
		p[j++] = next_word(s, c, &i);
	p[j] = NULL;
	return (p);
}

// int	main(void)
// {
// 	char	**res;
// 	int		i = 0;

// 	res = ft_split("hello world 42", ' ');
// 	while (res[i])
// 	{
// 		printf("%s\n", res[i]);
// 		i++;
// 	}
// 	return (0);
// }