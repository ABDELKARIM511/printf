/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 13:38:39 by aer-razk          #+#    #+#             */
/*   Updated: 2021/12/15 13:38:40 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include<unistd.h>
# include<fcntl.h>
# include<stdio.h>
# include<stdlib.h>
# include<stdarg.h>

void	ft_putnbr_fd(int n, int fd, int *i);
void	ft_putnbr_base(unsigned int nbr, char *base, int *i);
int		ft_putchar_fd(char c, int fd);
size_t	ft_strlen(const char *s);
void	ft(unsigned long nbr, char *base, int	*d);
void	ft_putnbr_d(unsigned int n, int fd, int *i);
int		ft_putstr_fd(char *s, int fd);
int		c(int c);
int		s(char *s);
int		p(unsigned long int p);
int		ft_printf(const char *format, ...);
#endif
