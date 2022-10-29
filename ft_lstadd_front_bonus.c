/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 09:07:12 by woumecht          #+#    #+#             */
/*   Updated: 2022/10/29 08:54:32 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}


int main()
{
	t_list *ptr = ft_lstnew(ft_strdup("last"));
	t_list *new = ft_lstnew(ft_strdup("first"));
	
	ft_lstadd_front(&ptr, new);

	while (new != NULL)
	{
		printf("%s \n", new -> content);
		new = new -> next;
	}
}


/*
#include <stdio.h>

int	main(void)
{
	t_list	*head;
	char *s1;

	s1 = malloc(5 * sizeof(char));
	s1 = "walid";
	head = malloc(sizeof(t_list));
	head -> content = s1;
	head -> next = NULL;

	t_list	*current;
	current = malloc(sizeof(t_list));
	current -> content = s1;
	current -> next = NULL;

	t_list *new;
	new = malloc(sizeof(t_list));
	new -> content = s1;
	new -> next = NULL;

	head -> next = current;
	ft_lstadd_front(&head, new);
	t_list	*ptr;
	ptr = head;
	int n;
	n = 3;
	while (n > 0)
	{
		printf("%s", ptr -> content);
		ptr = ptr -> next;
		n--;
	}
}*/
