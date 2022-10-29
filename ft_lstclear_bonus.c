/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 08:57:07 by woumecht          #+#    #+#             */
/*   Updated: 2022/10/29 10:11:38 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void del(void *s)
// {
// 	free(s);
// }

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;
	t_list	*p;

	if (lst == NULL || del == NULL)
		return ;
	ptr = *lst;
	while (ptr != NULL)
	{
		p = ptr->next;
		del(ptr->content);
		free(ptr);
		ptr = p;
	}
	*lst = NULL;
}

// int main()
// {
// 	t_list *first = ft_lstnew(ft_strdup("first"));
// 	t_list *second = ft_lstnew(ft_strdup("second"));
// 	t_list *three = ft_lstnew(ft_strdup("three"));

// 	first -> next = second;
// 	second -> next = three;
// 	three -> next = NULL;

// 	ft_lstclear(&first, del);
// 	while (first != NULL)
// 	{
// 		printf("-----  %s \n", first -> content);
// 		first = first -> next;
// 	}
// }