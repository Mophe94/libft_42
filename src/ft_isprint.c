/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:45:35 by dbajeux           #+#    #+#             */
/*   Updated: 2024/05/02 17:57:35 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
// #include <stdio.h>

// int	main(void)
// {
// 	int	c;

// 	c = 31;
// 	if (ft_isprint(c))
// 	{
// 		printf("is printable");
// 	}
// 	else
// 	{
// 		printf("is not printqble");
// 	}
// }
