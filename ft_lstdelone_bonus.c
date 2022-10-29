/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:41:33 by woumecht          #+#    #+#             */
/*   Updated: 2022/10/29 09:57:58 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void del(void *s)
// {
// 	free(s);
// }

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}

// int main()
// {
// 	t_list *ptr = ft_lstnew(ft_strdup("walid"));
// 	t_list *ccc = ft_lstnew(ft_strdup("hhhhh"));
	
// 	ptr -> next = ccc;
// 	ft_lstdelone(ccc, NULL);

// 	while (ptr != NULL)
// 	{
// 		printf("%s \n", ptr -> content);
// 		ptr = ptr -> next;
// 	}
// }