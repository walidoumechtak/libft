/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:13:00 by woumecht          #+#    #+#             */
/*   Updated: 2022/10/27 17:34:47 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ss1;
	size_t			i;
	unsigned char	*ss2;
	
	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if(ss1[i] < ss2[i])
			return (-1);
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	int c1[] = {260,2,3};
	int c2[] = {4,5,6};
	printf("me : %d \n", ft_memcmp(c1,c2, 5));
	00000000 00000000 00000001 00000100
	00000000 00000000 00000000 00000100
	1-0 = 1
	printf("%d", memcmp(c1,c2, 5));
}*/


int main()
{
	char c[] = "a";
	char d[] = "w";
	printf("%d", ft_memcmp(c, d, 3));
	
}