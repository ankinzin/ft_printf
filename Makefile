# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/10 11:35:28 by ankinzin          #+#    #+#              #
#    Updated: 2023/01/15 16:25:57 by ankinzin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = 	ft_checkspecifier.c \
		ft_printf.c \
		ft_printfc.c \
		ft_printfd.c \
		ft_printfp.c \
		ft_printfs.c \
		ft_printfu.c \
		ft_printfx.c

SRC_OBJ = $(SRC:.c=.o)

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIB = ar rcs
RM = rm -f

all : $(NAME)

$(NAME): $(SRC_OBJ)
		$(LIB) $(NAME) $(SRC_OBJ)
clean:
		$(RM) $(SRC_OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all
