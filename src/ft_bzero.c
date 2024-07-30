/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:59:48 by dbajeux           #+#    #+#             */
/*   Updated: 2024/05/02 16:02:11 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)s + i) = 0;
		i++;
	}
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*str;

// 	str = "Hello";
// 	printf("%s", str);
// 	bzero(str, 2);
// 	printf("%s", str);
// }
