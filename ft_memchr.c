/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 21:27:52 by woumecht          #+#    #+#             */
/*   Updated: 2022/10/29 14:36:45 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	size_t		i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		if (*str++ == (unsigned char) c)
			return ((char *) s + i);
		i++;
	}
	return (0);
}


int main()
{
	char c[] = "walid and med";
	printf("%s", memchr(c,300, 9));
}