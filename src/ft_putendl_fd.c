/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:10:44 by dbajeux           #+#    #+#             */
/*   Updated: 2024/05/02 17:06:39 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
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
	ft_putchar_fd('\n', fd);
}
// int	main(void)
// {
// 	char	str[] = "Hello, World!";
// 	char	error[] = "Error: File not found";

// 	ft_putendl_fd(str, 1);
// 	ft_putendl_fd(error, 2);
// 	ft_putendl_fd("Hello", 0);
// }
