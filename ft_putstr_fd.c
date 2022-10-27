/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:22:04 by woumecht          #+#    #+#             */
/*   Updated: 2022/10/22 13:00:04 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
/*
#include <fcntl.h>

int main()
{
	int fd;

	fd = open("amine.txt", O_CREAT | O_WRONLY, 0700);
	ft_putstr_fd("med oumechtak", fd);
	close(fd);
}*/
