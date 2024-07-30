/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.19.be>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:37:42 by dbajeux           #+#    #+#             */
/*   Updated: 2024/07/30 15:07:59 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_free(char **str)
{
	free(*str);
	*str = NULL;
	return (NULL);
}

char	*ft_clean_storage(char *storage)
{
	char	*breakpoint;
	char	*new_storage;
	int		len;

	breakpoint = ft_strchr(storage, '\n');
	if (!breakpoint)
	{
		new_storage = NULL;
		return (ft_free(&storage));
	}
	else
		len = (breakpoint - storage) + 1;
	if (!storage[len])
		return (ft_free(&storage));
	new_storage = ft_substr(storage, len, ft_strlen(storage) - len);
	ft_free(&storage);
	return (new_storage);
}

char	*ft_clean_line(char *storage)
{
	char	*line;
	char	*breakpoint;
	int		len;

	breakpoint = ft_strchr(storage, '\n');
	len = (breakpoint - storage + 1);
	line = ft_substr(storage, 0, len);
	if (!line)
		return (NULL);
	return (line);
}

char	*ft_fill_storage(int fd, char *storage)
{
	int		readcheck;
	char	*buffer;

	buffer = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buffer)
		return (ft_free(&storage));
	readcheck = 1;
	buffer[0] = '\0';
	while (readcheck > 0 && !ft_strchr(buffer, '\n'))
	{
		readcheck = read(fd, buffer, BUFFER_SIZE);
		if (readcheck > 0)
		{
			buffer[readcheck] = '\0';
			storage = ft_strjoin(storage, buffer);
		}
	}
	free(buffer);
	if (readcheck == -1)
		return (ft_free(&storage));
	return (storage);
}

char	*get_next_line(int fd)
{
	static char *storage = {0};
	char *line;

	if (fd < 0 || BUFFER_SIZE <= 0 || BUFFER_SIZE >= INT_MAX)
		return (NULL);
	if ((storage && !ft_strchr(storage, '\n')) || !storage)
		storage = ft_fill_storage(fd, storage);
	if (!storage)
		return (NULL);
	line = ft_clean_line(storage);
	if (!line)
		return (ft_free(&storage));
	storage = ft_clean_storage(storage);
	return (line);
}