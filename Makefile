#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/20 19:47:44 by mfebvay           #+#    #+#              #
#    Updated: 2015/01/20 20:08:21 by mfebvay          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME	= libft.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

SRC		= ft_atoi.c
OBJ		= $(SRC:%.c=%.o)
INC		= includes/

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)
	$(CC) -I $(INC) $(NAME) main.c

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $< -o $@