/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 08:57:07 by woumecht          #+#    #+#             */
/*   Updated: 2022/10/26 10:37:41 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;
	t_list	*p;

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
