/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sounania <sounania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 11:23:59 by sounania          #+#    #+#             */
/*   Updated: 2025/07/30 11:21:46 by sounania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*extract_line(char *s)
{
	int	i;

	i = 0;
	if (!s || !*s)
		return (NULL);
	while (s[i] && s[i] != '\n')
		i++;
	if (s[i] == '\n')
		i++;
	return (ft_substr(s, 0, i));
}

char	*trim_leftover(char *leftover)
{
	int		i;
	char	*new_str;

	i = 0;
	if (!leftover)
		return (NULL);
	while (leftover[i] && leftover[i] != '\n')
		i++;
	if (leftover[i] == '\n')
		i++;
	if (!leftover[i])
	{
		free(leftover);
		return (NULL);
	}
	new_str = ft_strdup(&leftover[i]);
	free(leftover);
	return (new_str);
}

char	*get_next_line(int fd)
{
	static char	*leftover;
	char		buffer[BUFFER_SIZE + 1];
	char		*line;
	char		*tmp;
	ssize_t		bytes_read;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	while (!leftover || !ft_strchr(leftover, '\n'))
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read <= 0)
			break ;
		buffer[bytes_read] = '\0';
		tmp = ft_strjoin(leftover, buffer);
		free(leftover);
		leftover = tmp;
	}
	if (!leftover || *leftover == '\0')
		return (NULL);
	line = extract_line(leftover);
	leftover = trim_leftover(leftover);
	return (line);
}

#include <stdio.h>
#include "fcntl.h"

int main(void)
{
	int fd;
	char *line;

	fd = open("test", O_RDONLY);
	line = get_next_line(fd);
	while(line)
	{
		printf("%s", line);
		line = get_next_line(fd);
	}
	close(fd);
	free(line);
	return (0);
}