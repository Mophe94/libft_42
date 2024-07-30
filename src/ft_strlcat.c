/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:09:31 by dbajeux           #+#    #+#             */
/*   Updated: 2024/05/02 16:54:10 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_src;
	size_t	len_dst;

	i = 0;
	len_src = ft_strlen(src);
	if (!dst && dstsize == 0)
		return (len_src);
	len_dst = ft_strlen(dst);
	if (dstsize <= 0 || dstsize <= len_dst)
		return (len_src + dstsize);
	while (src[i] && len_dst + i < dstsize - 1)
	{
		dst[i + len_dst] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	dst[15] = "je suis";
// 	char	*src;
// 	size_t	size;

// 	src = "< eh>";
// 	size = 0;
// 	size = ft_strlcat(dst, src, 15);
// 	printf("Mine %s\n", dst);
// 	printf("%zu\n", size);
// 	size = strlcat(dst, src, 15);
// 	printf("Original %s\n", dst);
// 	printf("%zu\n", size);
// } 
