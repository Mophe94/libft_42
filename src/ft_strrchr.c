/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:36:47 by dbajeux           #+#    #+#             */
/*   Updated: 2024/05/02 16:56:48 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*s;
// 	char	c;
// 	char	*result;

// 	s = "blabla";
// 	c = 'b';
// 	result = ft_strrchr(s, c);
// 	printf(" Mine %s\n", result);
// 	result = strrchr(s, c);
// 	printf(" Original %s", result);
// }
