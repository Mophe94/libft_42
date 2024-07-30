/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 19:32:53 by dbajeux           #+#    #+#             */
/*   Updated: 2024/05/02 17:15:02 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	c;

// 	c = 'a';
// 	printf("%c\n", c);
// 	c = ft_toupper(c);
// 	printf("%c", c);
// }
