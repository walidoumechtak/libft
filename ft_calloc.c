/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:42:15 by woumecht          #+#    #+#             */
/*   Updated: 2022/10/26 10:30:36 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size && count > SIZE_MAX / size)
		return (NULL);
	ptr = malloc(count * size * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr = ft_memset(ptr, 0, count * size);
	return (ptr);
}
/*
#include <stdio.h>
int	main(void)
{
	char *c;
	c = ft_calloc(SIZE_MAX - 5, SIZE_MAX - 3);
	printf("%p", c);
}*/
