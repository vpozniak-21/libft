# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpozniak <vpozniak@student.42warsaw.pl>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/06 11:42:12 by rcutte            #+#    #+#              #
#    Updated: 2024/12/19 21:43:06 by vpozniak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wextra -Wall -Werror -I.
SRC = ft_isascii.c  ft_memmove.c  ft_strlcpy.c ft_atoi.c \
	 ft_isdigit.c  ft_memset.c   ft_strlen.c   ft_tolower.c\
	ft_bzero.c    ft_isprint.c  ft_strchr.c   ft_strncmp.c  ft_toupper.c\
	ft_calloc.c   ft_memchr.c   ft_strdup.c   ft_strnstr.c\
	ft_isalnum.c  ft_memcmp.c   ft_strrchr.c\
	ft_isalpha.c  ft_memcpy.c   ft_strlcat.c \
	ft_substr.c   ft_strjoin.c  ft_strtrim.c ft_strmapi.c\
	ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
	ft_putnbr_fd.c ft_itoa.c ft_split.c

OBJ = $(SRC:.c=.o)


AR = ar -rcsv


all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o : %.c
	$(CC) -c $(CFLAGS) $< -o $@


clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all  clean fclean re
