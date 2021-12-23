/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_plus.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 13:36:16 by aer-razk          #+#    #+#             */
/*   Updated: 2021/12/15 13:36:18 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	c(int c)
{
	return (ft_putchar_fd(c, 1));
}

int	s(char *s)
{
	return (ft_putstr_fd(s, 1));
}

int	p(unsigned long int p)
{
	int	d;

	d = 0;
	ft_putstr_fd("0x", 1);
	ft(p, "0123456789abcdef", &d);
	return (d + 2);
}
