/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:41:43 by dbajeux           #+#    #+#             */
/*   Updated: 2024/05/02 16:41:54 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*cast_s1;
	unsigned char	*cast_s2;

	cast_s1 = (unsigned char *)s1;
	cast_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (cast_s1[i] != cast_s2[i])
			return (cast_s1[i] - cast_s2[i]);
		i++;
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;
// 	int		result;
// 	char	*s3;
// 	char	*s4;
// 	int		result2;

// 	s1 = "Hello";
// 	s2 = "HEllo";
// 	s3 = "Hello";
// 	s4 = "HEllo";
// 	result = ft_memcmp(s1, s2, 5);
// 	printf("%d\n", result);
// 	result2 = memcmp(s3, s4, 5);
// 	printf("%d", result2);
// }
