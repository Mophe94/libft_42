/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:57:55 by dbajeux           #+#    #+#             */
/*   Updated: 2024/05/02 16:43:35 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	if (dst == src)
		return (dst);
	if (dst > src)
	{
		while (len--)
		{
			d[len] = s[len];
		}
	}
	else
	{
		while (len--)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}

//  #include <stdio.h>
//  #include <string.h>

//  int	main(void)
//  {
// 		int		tabsrc[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// 		char	src[15] = "Hello World";

// 		ft_memmove(NULL, NULL, 5);
// 		for (int i = 0; i < 10; i++)
// 		{
// 			printf("%d\n", tabsrc[i]);
// 		}
// 		ft_memmove(src + 2, src, 8);
// 		printf("%s\n", src);

// 		printf("--------------------------\n");

// 		int		tabsrc2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// 		char	src2[15] = "Hello World";

// 		memmove(NULL, NULL, 5);
// 		for (int j = 0; j < 10; j++)
// 		{
// 			printf("%d\n", tabsrc2[j]);
// 		}
// 		memmove(src2 + 2, src2, 8);
// 		printf("%s", src2);
//  }
