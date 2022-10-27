/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:42:52 by woumecht          #+#    #+#             */
/*   Updated: 2022/10/27 22:50:51 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	result_f(char *str, int i)
{
	int	result;

	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	signe;
	unsigned long maxLong;

	maxLong = 9223372036854775807;
	result = 0;
	i = 0;
	signe = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		signe = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	result = result_f((char *)str, i);
	if (result > maxLong && signe == 1)
		return (0);
	else if (result > maxLong && signe == -1)
		return (-1);
	return (result * signe);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char c[] = "-214748364799999999999";
	//char c[] = "   --214";
	printf("me : %d \n", ft_atoi(c));
	printf("not me : %d", atoi(c));
}
