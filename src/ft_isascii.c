/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:27:25 by dbajeux           #+#    #+#             */
/*   Updated: 2024/05/02 16:11:26 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
// #include <stdio.h>

// int	main(void)
// {
// 	int	c;

// 	c = 97;
// 	if (ft_isascii(c))
// 	{
// 		printf("is ascii");
// 	}
// 	else
// 	{
// 		printf("is not ascii");
// 	}
// }
