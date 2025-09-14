# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/08 23:29:14 by hroxo             #+#    #+#              #
#    Updated: 2025/09/14 11:21:45 by hroxo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Werror -Wextra -Wall

LIBFT_DIR = /home/hroxo/Documents/git_rep/42_libft/libft
LIBFT = $(LIBFT_DIR)/libft.a
INCLUDES = -Iutil
SRC =	srcs/helper.c \
	srcs/helper2.c \
	ft_printf.c \
	srcs/print.c

OBJ = $(SRC:.c=.o)

RM = rm -rf

all: $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)
%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(OBJ)
	cp $(LIBFT) .
	ar rcs $(NAME) $(OBJ) libft.a
	$(RM) libft.a

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(OBJ) $(NAME)

re: fclean all

.PHONY: all re clean fclean


