#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/30 20:33:15 by mfebvay           #+#    #+#              #
#    Updated: 2015/01/30 20:50:58 by mfebvay          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

.PHONY: all clean fclean re libft

NAME	= libtest
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

SRC		= main.c

all: $(NAME)

libft:
	make -C ..

$(NAME): libft main.c 
	$(CC) main.c -L.. -lft -I.. -o $(NAME)