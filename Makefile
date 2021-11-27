# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/24 21:57:55 by ydahni            #+#    #+#              #
#    Updated: 2021/11/27 17:52:11 by ydahni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

CC = cc

SRC = ft_putstr.c ft_putnbr.c ft_putnbr_un.c ft_puthexax.c ft_puthexa.c ft_putchar.c ft_printf.c  ft_adresse.c \

OBJ = ${SRC:.c=.o}

all: $(NAME)

$(NAME):
		$(CC) $(FLAGS) -c ${SRC}
		ar -rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all