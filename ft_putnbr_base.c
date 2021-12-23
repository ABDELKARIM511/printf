/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 18:45:44 by aer-razk          #+#    #+#             */
/*   Updated: 2021/12/08 16:04:48 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putchar(int a, char *base, int *d)
{
	int	i;

	i = -1;
	while (base[++i] != '\0')
	{
		if (i == a)
		{
			write(1, &base[i], 1);
			(*d)++;
		}
	}
}

int	basecheck(char *base)
{
	int	i;
	int	j;

	i = -1;
	while (base[++i] != '\0')
	{
		j = i;
		while (base[++j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
		}
		if (base[i] == '-' || base[i] == '+')
			return (0);
	}
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	return (1);
}

void	ft_putnbr_base(unsigned int nbr, char *base, int	*d)
{
	if (nbr >= 0 && basecheck(base) == 1)
	{
		if ((nbr / ft_strlen(base)) == 0)
			ft_putchar(nbr, base, d);
		else
		{
			ft_putnbr_base(nbr / ft_strlen(base), base, d);
			ft_putchar(nbr % ft_strlen(base), base, d);
		}
	}
}
