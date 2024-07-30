/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:22:52 by dbajeux           #+#    #+#             */
/*   Updated: 2024/05/02 16:02:20 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_check(int sign)
{
	if (sign == 1)
		return (-1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int					i;
	int					sign;
	unsigned long long	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - 48);
		i++;
		if (result > 9223372036854775807)
			return (ft_check(sign));
	}
	return (result * sign);
}
// #include <stdlib.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	*str;
// 	char	*str1;
// 	int		result;

// 	str = "++595595";
// 	str1 = "++595595";

// 	result = 0;
// 	result = ft_atoi(str);
// 	printf("%d\n", result);
// 	result = atoi(str1);
// 	printf("%d", result);
// }