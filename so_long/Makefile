# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sergei <sergei@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/08 20:06:13 by sergei            #+#    #+#              #
#    Updated: 2025/09/13 19:37:31 by sergei           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

:= cc
CFLAGS := -Wall -Wextra -Werror -Iinclude -I$(MLX_DIR)


MLX_DIR ?= ../minilibx-linux
MLX_LIB := -L$(MLX_DIR) -lmlx -lXext -lX11 -lm -lbsd


SRC := \
src/main.c src/error.c \
src/util_mem.c src/util_str.c src/util_split.c src/util_matrix.c \
src/map_read.c src/map_validate.c src/pathcheck.c \
src/move.c src/render.c src/gfx_init.c src/close.c


OBJ := $(SRC:.c=.o)


all: $(NAME)


$(NAME): $(OBJ)
$(CC) $(OBJ) $(MLX_LIB) -o $@


%.o: %.c
mkdir -p $(dir $@)
$(CC) $(CFLAGS) -c $< -o $@


clean:
rm -f $(OBJ)


fclean: clean
rm -f $(NAME)


re: fclean all


.PHONY: all clean fclean re