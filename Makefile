# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aer-razk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/16 13:20:53 by aer-razk          #+#    #+#              #
#    Updated: 2021/12/16 13:20:55 by aer-razk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc 

CFLAGS = -Wall -Wextra -Werror

ARC = ar rc

FILES = ft_printf.c ft_putchar_fd.c ft_putnbr_base.c ft_putnbr_fd.c ft_putstr_fd.c ft_strlen.c\
		ft_putnbr_d.c ft.c ft_plus.c

OBJS = $(FILES:.c=.o)

all:$(NAME)

$(NAME): $(OBJS)
	$(ARC) $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

%.o : %.c
	gcc $(CFLAGS) -o $@ -c $^

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY: re fclean clean all
