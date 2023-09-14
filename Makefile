# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsalah-d <lsalah-d@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/13 10:29:24 by lsalah-d          #+#    #+#              #
#    Updated: 2023/09/14 15:06:44 by lilith           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c\
      ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c\
      ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
      ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c\
      ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c\
      ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

OBJS = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

INCLUDE = libft.h

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDE)
	ar rc $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CCFLAGS) -c -o $@ $<
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
