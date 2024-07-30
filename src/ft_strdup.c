/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:36:37 by dbajeux           #+#    #+#             */
/*   Updated: 2024/05/02 16:51:45 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*s1_dup;

	i = 0;
	while (s1[i])
		i++;
	s1_dup = malloc(sizeof(char) * i + 1);
	if (!s1_dup)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s1_dup[i] = s1[i];
		i++;
	}
	s1_dup[i] = '\0';
	return (s1_dup);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;

// 	s1 = "Hello";
// 	s2 = ft_strdup(s1);
// 	printf("Mine %s \n", s2);
// 	s2 = strdup(s1);
// 	printf("Original %s", s2);
// }
