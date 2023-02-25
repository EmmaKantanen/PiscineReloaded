# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekantane <ekantane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/01 10:43:15 by ekantane          #+#    #+#              #
#    Updated: 2021/11/03 17:59:47 by ekantane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

CC = gcc

SRC = ft_display_file.c

OBJ = ft_display_file.o

FLAGS = -Wall -Wextra -Werror -o

all:	$(NAME)

$(NAME):
	$(CC) $(FLAGS) $(NAME) $(SRC)

clean:
	rm -f *.o
	
fclean: clean
	rm -rf $(NAME)