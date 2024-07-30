/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 20:03:45 by dbajeux           #+#    #+#             */
/*   Updated: 2024/05/02 16:58:14 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	c;

// 	c = 'A';
// 	printf("%c\n", c);
// 	c = ft_tolower(c);
// 	printf("%c", c);
// }
