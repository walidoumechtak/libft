/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:30:13 by woumecht          #+#    #+#             */
/*   Updated: 2022/10/30 15:53:54 by woumecht         ###   ########.fr       */
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

// int main()
// {
// 	int arr[] = {1,2,3};
// 	ft_memset(arr, 255, 4);
// 	printf("%lu", arr[0]);


// 	// int a = 4294967295;
// 	// printf("%d", a);
// }
