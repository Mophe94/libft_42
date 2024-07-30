/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:32:44 by dbajeux           #+#    #+#             */
/*   Updated: 2024/04/30 19:12:07 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
// #include <stdio.h>

// int	main(void)
// {
// 	int	c;

// 	c = 'd';
// 	if (ft_isdigit(c))
// 	{
// 		printf("c is digit");
// 	}
// 	else
// 	{
// 		printf("c is not digit");
// 	}
// }
