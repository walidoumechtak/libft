/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:58:23 by woumecht          #+#    #+#             */
/*   Updated: 2022/10/28 23:26:36 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;

	if (lst == NULL)
		return (lst);
	ptr = lst;
	while (ptr->next != NULL)
		ptr = ptr->next;
	return (ptr);
}

int main()
{
	t_list *head;
	t_list *new;
	t_list *current;
	t_list *last;
	
	head = malloc(sizeof(t_list));
	new = malloc(sizeof(t_list));
	current = malloc(sizeof(t_list));
	
	head -> content = ft_strdup("walid");
	head -> next = NULL;

	new -> content = ft_strdup("amine");
	new -> next = current;

	current -> content = ft_strdup("med");
	current -> next = head;

	last = ft_lstlast(new);
	printf("%s", last -> content);
}