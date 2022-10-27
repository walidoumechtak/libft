/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:11:07 by woumecht          #+#    #+#             */
/*   Updated: 2022/10/26 10:38:01 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (lst == NULL)
		return (0);
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

/*
#include <stdio.h>

int	main(void)
{
	t_list	*head;
	char	*s1;
	t_list	*current;
	t_list	*new;

	s1 = malloc(5 * sizeof(char));
	s1 = "walid";
	head = malloc(sizeof(t_list));
	head -> content = s1;
	head -> next = NULL;
	current = malloc(sizeof(t_list));
	current -> content = s1;
	current -> next = NULL;
	new = malloc(sizeof(t_list));
	new -> content = s1;
	new -> next = head;
	current -> next = new;
	
	printf("%d", ft_lstsize(current));
}
*/