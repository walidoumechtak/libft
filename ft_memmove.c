/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:46:57 by woumecht          #+#    #+#             */
/*   Updated: 2022/10/26 15:43:13 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*s;
	char		*d;
	size_t		i;

	if (dst == NULL && src == NULL)
		return (NULL);
	d = dst;
	s = src;
	if (d < s)
	{
		i = 0;
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	 else
	 {
	 	while (len--)
	 		d[len] = s[len];
	 }
	return (dst);
}
#include <stdio.h>
#include <string.h>
int main()
{
	char c1[] = "oumechtak";
	char c2[] = "oumechtak";
	printf(" me : %s \n", ft_memmove(c1+3, c1, 5));
	printf(" nn : %s", memmove(c2+3, c2, 5));
}
