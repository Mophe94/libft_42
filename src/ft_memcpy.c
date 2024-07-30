/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:05:00 by dbajeux           #+#    #+#             */
/*   Updated: 2024/05/02 16:42:24 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == src)
		return (dst);
	while (i < n)
	{
		*((char *)dst + i) = *((char *)src + i);
		i++;
	}
	return (dst);
}

//  #include "string.h"
//  #include <stdio.h>

//  int	main(void)
//  {
// 		double	tabsrc[5] = {2.3, 2.5, 2.6, 2.8, 2.9};
// 		double	tabdest[5];
// 		char	*s1;
// 		char	s2[50];

// 		s1 = "";
// 		memcpy(s2, s1, 10);
// 		printf("%s\n", s2);
// 		memcpy(tabdest,tabsrc, sizeof(tabsrc));
// 		for (int i = 0; i < 5; i++)
// 		{
// 			printf("tab_dest[%d] = %f\n", i, tabdest[i]);
// 		}
//  }
