/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:21:43 by woumecht          #+#    #+#             */
/*   Updated: 2022/10/28 23:30:49 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	f(void *s)
{
	int i = 0;
	while (*((char *)s + i ))
	{
		*((char *) s + i) = 'w';
		i++;
	}
}

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
#include <stdio.h>
int main(void)
{
	t_list	*p1;
	t_list	*p2;
	char s[] = "amine";

	p1 = malloc(sizeof(t_list));
	p2 = malloc(sizeof(t_list));

	p1 -> content = s;
	p1 -> next = p2;

	p2 -> content = s;
	p2 -> next = NULL;

	ft_lstiter(p1, f);
	printf("%s", p1 -> content);
}*/
