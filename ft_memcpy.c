/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 09:46:07 by woumecht          #+#    #+#             */
/*   Updated: 2022/10/26 14:57:54 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*sr;
	char		*p;
	size_t		i;

	if (dst == NULL && src == NULL)
		return (NULL);
	sr = (char *)src;
	p = (char *)dst;
	if (p == sr)
		return (ft_strdup(""));
	i = 0;
	while (i < n)
	{
		p[i] = sr[i];
		i++;
	}
	return (dst);
}
/*
int main()
{
	char c1[] = "this";
	char c2[] = "this";
	printf("%s", memcpy(c1,c2,4));
	// memcpy("this","this",4);
}*/
