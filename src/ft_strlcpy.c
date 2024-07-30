/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.19.be>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:19:32 by dbajeux           #+#    #+#             */
/*   Updated: 2024/07/30 14:03:16 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	size;

	i = 0;
	size = 0;
	while (*(src + size))
		size++;
	if (dstsize == 0)
		return (size);
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (size);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*src;
// 	char	dst[5] = "";
// 	char	*s2;
//     char    dst2[5] = "";
// 	size_t	len;

// 	s2 = "Hellooo";
// 	src = "Hellooo";

// 	len = ft_strlcpy(dst, src, 0);
// 	printf("Mine <%s>\n", dst);
// 	printf("%zu\n", len);

// 	len = strlcpy(dst2, s2, 0);
// 	printf("original <%s>\n", dst2);
// 	printf("%zu", len);
// }
