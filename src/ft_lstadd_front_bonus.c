/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:55:52 by dbajeux           #+#    #+#             */
/*   Updated: 2024/05/20 13:51:05 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *to_add)
{
	t_list	*tmp;

	if (!lst || !to_add)
		return ;
	tmp = *lst;
	(*lst) = to_add;
	(*lst)->next = tmp;
}

// #include "stdio.h"

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*lst2;
// 	int		result;

// 	lst = ft_lstnew("Hello");
// 	lst2 = ft_lstnew(", World");
// 	ft_lstadd_front(&lst, lst2);
// 	result = ft_lstsize(lst);
// 	printf("La taille de ma list est de -> %d\n", result);
// 	printf("contenu de lst -> %s\n", (char *)lst->content);
// 	printf("contenu de lst 2 -> %s", (char *)lst->next->content);
// 	ft_lstclear(&lst, del);
// 	printf("%s",(char *)lst->content);
// }
