# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/08 23:29:14 by hroxo             #+#    #+#              #
#    Updated: 2025/10/14 19:22:10 by hroxo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Werror -Wextra -Wall

INCLUDES = -Iutil
SRC =	srcs/helper.c \
	srcs/helper2.c \
	ft_printf.c \
	srcs/print.c

OBJ = $(SRC:.c=.o)

RM = rm -rf

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(OBJ) $(NAME)

re: fclean all

.PHONY: all re clean fclean
