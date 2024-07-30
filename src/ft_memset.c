/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:59:49 by dbajeux           #+#    #+#             */
/*   Updated: 2024/05/02 16:46:34 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*cast;

	i = 0;
	cast = b;
	while (i < len)
	{
		cast[i] = c;
		i++;
	}
	return (b);
}
//#include <stdio.h>

// int	main(void)
// {
// 	char	str[10];
// 	int		i;

// 	i = 0;
// 	ft_memset(str, 'a', 10);
// 	while (i < 10)
// 	{
// 		printf("%c", str[i]);
// 		i++;
// 	}
// }
