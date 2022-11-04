# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: woumecht <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 15:28:05 by woumecht          #+#    #+#              #
#    Updated: 2022/11/04 11:06:25 by woumecht         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a

SRC = ft_printf.c	\
	ft_vprintf.c	\
	ft_putchar.c	\
	ft_putstr.c		\
	ft_putnbr.c		\
	ft_printUns.c	\
	ft_hexaLower.c	\
	ft_hexaUpper.c

all:$(NAME)

OBJ = $(SRC:.c=.o)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(NAME)

re: fclean all

git :
	git add . && git commit -m "push printf" && git push
