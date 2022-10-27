/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 21:27:52 by woumecht          #+#    #+#             */
/*   Updated: 2022/10/26 18:43:18 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	size_t		i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*str++ == (unsigned char) c)
			return ((char *) s + i);
		i++;
	}
	return (0);
}
