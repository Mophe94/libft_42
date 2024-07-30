/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:25:11 by dbajeux           #+#    #+#             */
/*   Updated: 2024/05/02 16:11:13 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
//  #include <stdio.h>
//  int main(void)
//  {
//      int c = '7';
//      if (ft_isalpha(c))
//          printf("C is alpha");
//      else
//          printf("C is not alpha");
//  }
