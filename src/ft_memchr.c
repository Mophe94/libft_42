/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 18:43:53 by dbajeux           #+#    #+#             */
/*   Updated: 2024/05/02 16:41:33 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((char *)(s + i)) == (char)c)
		{
			return ((void *)s + i);
		}
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*str;
// 	char	c;

// 	str = "Hello";
// 	c = 'e';
// 	printf("%s\n", ft_memchr((const void *)str, c, 4));
// 	printf("%s", memchr(str, c, 4));
// }
