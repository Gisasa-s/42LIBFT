# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gisasa-s <gisasa-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/06 19:06:16 by gisasa-s          #+#    #+#              #
#    Updated: 2021/10/03 14:46:52 by gisasa-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc

CFLAGS=-Wall -Wextra -Werror

SRCS= ft_isalpha.c ft_calloc.c  ft_isprint.c    ft_tolower.c ft_strncmp.c  ft_memset.c\
ft_split.c ft_strnstr.c ft_isascii.c ft_substr.c   ft_toupper.c ft_strchr.c ft_strrchr.c ft_strlcpy.c  ft_bzero.c\
ft_atoi.c ft_itoa.c  ft_isalnum.c ft_strjoin.c ft_putchar_fd.c ft_isdigit.c ft_strlen.c ft_strlcat.c ft_memcpy.c ft_memccpy.c\
ft_putendl_fd.c ft_strmapi.c ft_strtrim.c  ft_putstr_fd.c ft_putnbr_fd.c  ft_memchr.c ft_memcmp.c ft_memmove.c ft_strdup.c\

OBJS= $(SRCS:.c=.o)
INCLUDES=./
NAME=libft.a
all: $(NAME) 
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -I$(INCLUDES) -c $(SRCS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
%.o: %c
	$(CC) $(CFLAGS) -c $<
clean:
	    $(RM) *.o
fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY: clean fclean all re
