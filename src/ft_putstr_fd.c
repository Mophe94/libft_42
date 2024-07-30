/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:03:16 by dbajeux           #+#    #+#             */
/*   Updated: 2024/05/20 13:51:06 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	if (fd < 0)
		return ;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

//  int	main(void)
//  {
// 		char	str[] = "Hello, World!";
// 		char	error[] = "Error: File not found";

// 		ft_putstr_fd(str, 1);
// 		ft_putstr_fd(error, 2);
// 		ft_putstr_fd("Hello", 0);
//  }
