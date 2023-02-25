# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekantane <ekantane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/30 19:20:27 by ekantane          #+#    #+#              #
#    Updated: 2021/11/03 11:16:21 by ekantane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

HEADER = ./includes

FLAGS = -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):
	$(CC) -c $(SRCS) $(FLAGS) -I $(HEADER)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -rf $(OBJ)
	
fclean: clean
	rm -rf $(NAME)
	
re: fclean all