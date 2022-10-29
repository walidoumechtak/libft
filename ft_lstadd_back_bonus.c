/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:51:57 by woumecht          #+#    #+#             */
/*   Updated: 2022/10/29 08:38:49 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	
	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	ptr = *lst;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new;
}

int main ()
{
	t_list	*ptr;
	t_list	*new;

	new = ft_lstnew(ft_strdup("hhhhhh"));
	ptr = ft_lstnew(ft_strdup("walid"));

	ft_lstadd_back(&ptr,new);
	
	while (ptr != NULL)
	{
		printf("%s \n", ptr -> content);
		ptr = ptr -> next;	
	}
}