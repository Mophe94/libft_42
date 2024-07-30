/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:54:51 by dbajeux           #+#    #+#             */
/*   Updated: 2024/05/02 16:11:03 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
// #include <stdio.h>

// int	main(void)
// {
// 	int	c;

// 	c = 'D';
// 	if (ft_isalnum(c))
// 	{
// 		printf("c is alnum");
// 	}
// 	else
// 	{
// 		printf("c is not alnum");
// 	}
// }
