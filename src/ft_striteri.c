/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:53:24 by dbajeux           #+#    #+#             */
/*   Updated: 2024/05/02 16:53:02 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

// char	uppercase(unsigned int i, char * c)
// {
// 	if (i % 2 == 0)
// 		return (ft_toupper(c));
// 	else
// 		return (c);
// }

// #include <stdio.h>

// int	main(void)
// {
// 	char	*s;

// 	s = "hello, world";
// 	ft_striteri(s, &uppercase);
// 	printf("%s", s);
// }
