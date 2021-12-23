/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 21:40:55 by aer-razk          #+#    #+#             */
/*   Updated: 2021/12/13 17:34:18 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	i;
	int	k;

	k = 0;
	if (s)
	{
		i = ft_strlen(s);
		k = 0;
		while (k < i)
		{
			write(fd, &s[k], 1);
			k++;
		}
	}
	else
	{
		write (1, "(null)", 6);
		return (6);
	}
	return (k);
}
