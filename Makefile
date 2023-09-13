# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsalah-d <lsalah-d@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/13 10:29:24 by lsalah-d          #+#    #+#              #
#    Updated: 2023/09/13 10:29:52 by lsalah-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = #cambiar por mis funciones#

OBJS = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $(SRC)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
