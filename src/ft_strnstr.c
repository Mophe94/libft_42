/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 20:56:25 by dbajeux           #+#    #+#             */
/*   Updated: 2024/05/02 18:45:48 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	len_needle;

	i = 0;
	if (!haystack && len == 0)
		return (NULL);
	len_needle = ft_strlen(needle);
	if (needle[0] == 0)
		return ((char *)haystack);
	while (haystack[i] != 0 && len >= i + len_needle)
	{
		if (ft_strncmp(&haystack[i], needle, len_needle) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*str;
// 	char	*substring;
// 	char	*result;

// 	str = NULL;
// 	substring = "HELlo";
// 	result = ft_strnstr(str, substring, 0);
// 	printf("<%s>\n", result);
// 	result = strnstr(str, substring, 0);
// 	printf("<%s>", result);
// }
/* int main(void)
{
	char *str;
	if (!(str = ft_strnstr("lorem ipsum dolor sit amet", "dolor", 0)))
		printf("NULL");
	else
		printf("%s",str);
}*/
