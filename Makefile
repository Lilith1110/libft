# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsalah-d <lsalah-d@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/13 10:29:24 by lsalah-d          #+#    #+#              #
#    Updated: 2023/09/17 17:07:12 by lilith           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c\
      ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c\
      ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
      ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c\
      ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c\
      ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c\
      ft_tolower.c ft_toupper.c

OBJS = $(SRC:.c=.o)

BONUSSRC = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c\
	ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c\
	ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

BONUSOBJ = $(BONUSSRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

INCLUDE = libft.h

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDE)
	ar rc $(NAME) $(OBJS)

bonus: $(OBJ) $(BONUSOBJ) $(INCLUDE)
	ar rc $(NAME) $(BONUSOBJ) $(OBJ)

%.o: %.c
	$(CC) $(CCFLAGS) -c -o $@ $<
clean:
	rm -f $(OBJS) $(BONUSOBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

rebonus: fclean bonus

so:
	$(CC) -fPIC $(CFLAGS) $(SRC)
	gcc -shared -o libft.so $(OBJ)
