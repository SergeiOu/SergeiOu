# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sounania <sounania@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/04 12:57:43 by sounania          #+#    #+#              #
#    Updated: 2025/06/16 13:07:23 by sounania         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

CC		= cc
CFLAGS	= -Wall -Wextra -Werror

SRC		= ft_printf.c \
		  ft_printf_handlers.c \
          ft_printf_utils.c \
          ft_printf_utils2.c

OBJ		= $(SRC:.c=.o)

AR		= ar rcs
RM		= rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re