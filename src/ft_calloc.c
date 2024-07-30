/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:04:52 by dbajeux           #+#    #+#             */
/*   Updated: 2024/05/02 17:57:14 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*memoryspace;
	size_t	buff;

	buff = count * size;
	if (buff > INT_MAX || (size != 0 && (buff / size) != count))
		return (NULL);
	memoryspace = malloc(buff);
	if (!memoryspace)
		return (NULL);
	ft_bzero(memoryspace, buff);
	return (memoryspace);
}

// #include <stdlib.h>

// int	main(void)
// {
// 	char	*str;

// 	str = ft_calloc(INT_MIN, INT_MIN);
// 	printf("<%s>\n",str);
// 	free(str);
// }