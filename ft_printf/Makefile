# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/08 23:29:14 by hroxo             #+#    #+#              #
#    Updated: 2025/09/11 13:59:10 by hroxo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Werror -Wextra -Wall

LIBFT_DIR = ~/Documents/git_rep/42_libft/libft
LIBFT = $(LIBFT_DIR)/libft.a
INCLUDES = -Iutil/ -I$(LIBFT_DIR)

SRC = ft_printf.c / srcs/helper.c / srcs/count_args.c /
 srcs/helper2.c
OBJ = $(SRC:.c=.o)

RM = rm -rf

all: $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(LIBFT) $(OBJ)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(OBJ) $(NAME)
re: fclean all

.PHONY: all re clean fclean


