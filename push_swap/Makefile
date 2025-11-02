# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sounania <sounania@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/02 17:37:30 by sounania          #+#    #+#              #
#    Updated: 2025/11/02 17:37:58 by sounania         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap 
CC = cc
CFLAGS = -Wall -Wextra -Werror
HEADER = push_swap.h
SRC = error_handling.c ft_split.c main.c pa_pb.c push_swap.c ra_rb_rr.c rra_rrb_rrr.c sa_sb_ss.c sorting.c stack_utils.c utils.c
OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean