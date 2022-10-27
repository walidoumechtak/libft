/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:42:52 by woumecht          #+#    #+#             */
/*   Updated: 2022/10/21 16:01:54 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_plus(char *str)
{
	int	i;
	int	cpt;

	i = 0;
	cpt = 0;
	while (str[i])
	{
		if (str[i] == '+')
			cpt++;
		i++;
	}
	return (cpt);
}

static int	count_mince(char *str)
{
	int	i;
	int	cpt;

	i = 0;
	cpt = 0;
	while (str[i])
	{
		if (str[i] == '-')
		{
			cpt++;
		}
		i++;
	}
	return (cpt);
}

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
	int	cpt_plus;
	int	cpt_mince;
	int	i;
	int	result;
	int	signe;

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
	cpt_mince = count_mince((char *)str);
	cpt_plus = count_plus((char *)str);
	result = result_f((char *)str, i);
	if ((cpt_mince > 1 || cpt_plus > 1 || (cpt_mince + cpt_plus) >= 2)
		&& result == 0)
		return (0);
	return (result * signe);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char c[] = "   +214748364799999999999";
	printf("me : %d \n", ft_atoi(c));
	printf("not me : %d", atoi(c));
}*/
