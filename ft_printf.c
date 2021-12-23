/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 13:23:11 by aer-razk          #+#    #+#             */
/*   Updated: 2021/12/15 13:23:17 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	di(int di)
{
	int	i;

	i = 0;
	ft_putnbr_fd(di, 1, &i);
	return (i);
}

int	u(unsigned int u)
{
	int	i;

	i = 0;
	ft_putnbr_d(u, 1, &i);
	return (i);
}

int	xl(int x, int d)
{
	int	e;

	e = 0;
	if (d == 'x')
		ft_putnbr_base(x, "0123456789abcdef", &e);
	else if (d == 'X')
		ft_putnbr_base(x, "0123456789ABCDEF", &e);
	return (e);
}

int	printit(const char *format, va_list args, int i, int j)
{
	while (format[++i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			if (format[i + 1] == 'c')
				j += c(va_arg(args, int));
			else if (format[i + 1] == 's')
				j += s(va_arg(args, char *));
			else if (format[i + 1] == 'p')
				j += p(va_arg(args, unsigned long int));
			else if ((format[i + 1] == 'd') || (format[i + 1] == 'i'))
				j += di(va_arg(args, int));
			else if (format[i + 1] == 'u')
				j += u(va_arg(args, unsigned int));
			else if ((format[i + 1] == 'x') || (format[i + 1] == 'X'))
				j += xl(va_arg(args, int), format[i + 1]);
			else if (format[i + 1] == '%')
				j += ft_putchar_fd(format[i + 1], 1);
			i++;
		}
		else
			j += ft_putchar_fd(format[i], 1);
	}
	return (j);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		j;

	i = -1;
	j = 0;
	va_start(args, format);
	j = printit(format, args, i, j);
	va_end(args);
	return (j);
}
