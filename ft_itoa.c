/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:30:11 by woumecht          #+#    #+#             */
/*   Updated: 2022/10/26 13:15:38 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digit(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*n_to_array(char *arr, int n, int count)
{
	if (n < 0)
	{
		n *= -1;
		arr[count + 1] = '\0';
		arr[0] = '-';
		while (count > 0)
		{
			arr[count] = (n % 10) + 48;
			count--;
			n = n / 10;
		}
	}
	else
	{
		arr[count] = '\0';
		count -= 1;
		while (count >= 0)
		{
			arr[count] = (n % 10) + 48;
			count--;
			n = n / 10;
		}
	}
	return (arr);
}

char	*ft_itoa(int n)
{
	char	*to_int;
	int		count;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		count = count_digit(n * -1) + 1;
	else
		count = count_digit(n);
	to_int = (char *)malloc((count + 1) * sizeof(char));
	if (!to_int)
		return (NULL);
	if (n < 0)
		n_to_array(to_int, n, count - 1);
	else
		n_to_array(to_int, n, count);
	return (to_int);
}
/*
#include <stdio.h>

int	main(void)
{
	int n = 2147468848;
	char *arr;

	arr = ft_itoa(n);
	int i = 0;
	while (arr[i])
	{
		printf("%c", arr[i]);
		i++;
	}
}*/
