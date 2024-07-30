/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:46:39 by dbajeux           #+#    #+#             */
/*   Updated: 2024/05/02 16:53:41 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str_join;
	int		i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	str_join = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str_join)
		return (NULL);
	while (s1[i])
	{
		str_join[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		str_join[i + ft_strlen(s1)] = s2[i];
		i++;
	}
	str_join[i + ft_strlen(s1)] = '\0';
	return (str_join);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;
// 	char	*result;

// 	s1 = "";
// 	s2 = " comment va ?";
// 	result = ft_strjoin(NULL, s2);
// 	printf("%s", result);
// }
