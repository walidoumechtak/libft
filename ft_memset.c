/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:30:13 by woumecht          #+#    #+#             */
/*   Updated: 2022/10/27 00:49:16 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = b;
	while (len)
	{
		*p++ = (unsigned char)c;
		len--;
	}
	return (b);
}
#include <stdio.h>

int main()
{
	char str[] = "aabbcc";
	int	i;

	i = 0;
	while(str[i])
	{
  	  ft_memset(&str[i], str[i] + 1, 1);
	  i++;
	}
	printf("%s", str);
}