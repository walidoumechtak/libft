/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:27:46 by woumecht          #+#    #+#             */
/*   Updated: 2022/10/25 18:35:42 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	j;
	size_t	len_str;

	len_str = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	if (start >= len_str)
		return (ft_calloc(1, 1));
	if (len_str - start < len)
		len = len_str - start;
	ptr = malloc((len + 1) * sizeof(char)); 
	if (!ptr)
		return (NULL);
	j = 0;
	while ((char *)s && j < len)
	{
		ptr[j] = ((char *)s)[start];
		start++;
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
