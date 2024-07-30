/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 11:05:41 by dbajeux           #+#    #+#             */
/*   Updated: 2024/05/02 16:51:11 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (str[i] != (char)c)
	{
		if (str[i] == '\0')
		{
			return (NULL);
		}
		i++;
	}
	return (str + i);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	int		c;
// 	char	*str_result;
// 		char	*str;

// 	str = "Hello world";
// 	c = 'l';
// 	str_result = ft_strchr(str, c);
// 	printf("%s\n", str_result);
// 	str_result = strchr(str, c);
// 	printf("%s", str_result);
// }
