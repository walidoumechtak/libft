/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:21:57 by woumecht          #+#    #+#             */
/*   Updated: 2022/10/30 20:57:36 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_src;
	size_t	len_dest;

	if (dst == NULL && dstsize == 0)
		return (ft_strlen(src));
	if (dst == NULL && src == NULL && dstsize == 0)
		return (0);
	len_src = ft_strlen(src);
	len_dest = ft_strlen(dst);
	if (dstsize == 0 || len_dest >= dstsize)
		return (len_src);
	i = 0;
	while (src[i] && i < dstsize - len_dest - 1)
	{
		dst[len_dest + i] = src[i];
		i++;
	}
	dst[len_dest + i] = '\0';
	return (len_src + len_dest);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char *d = NULL;
// 	char s[] = "walid";

// 	printf("%zu \n", ft_strlcat(d,s,0));
// 	printf("%s", d);
// }