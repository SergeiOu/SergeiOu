/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sounania <sounania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 11:24:09 by sounania          #+#    #+#             */
/*   Updated: 2025/07/17 17:19:55 by sounania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int n)
{
	while (*s)
	{
		if (*s == (char)n)
			return ((char *)s);
		s++;
	}
	if ((char)n == '\0')
		return ((char *)s);
	return (NULL);
}

int	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	copylen;
	char	*p;

	i = 0;
	if (start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	else if (ft_strlen(s) - start < len)
		copylen = ft_strlen(s) - start;
	else
		copylen = len;
	p = malloc(copylen + 1);
	if (!p)
		return (NULL);
	while (i < copylen)
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

char	*ft_strdup(const char *s)
{
	int		i;
	char	*p;

	i = 0;
	while (s[i] != '\0')
		i++;
	p = malloc(i + 1);
	if (!p)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
