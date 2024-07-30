/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 20:50:28 by dbajeux           #+#    #+#             */
/*   Updated: 2024/05/20 13:51:03 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *to_add)
{
	if (!lst || !to_add)
		return ;
	else if (!*lst)
	{
		*lst = to_add;
		return ;
	}
	ft_lstlast(*lst)->next = to_add;
}
