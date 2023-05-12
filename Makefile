# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/02 12:46:34 by lannur-s          #+#    #+#              #
#    Updated: 2023/05/12 15:57:54 by lannur-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs
SRCS = ft_isascii.c ft_isprint.c ft_isalpha.c ft_isdigit.c \
       ft_isalnum.c ft_tolower.c ft_toupper.c \
	   ft_strlen.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
	   ft_memcmp.c ft_memchr.c ft_strnstr.c \
	   ft_memcpy.c ft_memmove.c ft_memset.c ft_bzero.c \
	   ft_strlcpy.c ft_strlcat.c ft_atoi.c ft_calloc.c \
	   ft_strdup.c ft_substr.c ft_strjoin.c \
	   ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	   ft_putnbr_fd.c ft_strmapi.c ft_striteri.c ft_strtrim.c \

#		ft_strtrim.c ft_strsplit.c ft_itoa.c	   
BONUS = ft_lstnew.c
	   
OBJS = $(SRCS:%.c=%.o)

BONUSOBJS = $(BONUS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS) $(BONUSOBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS) $(BONUSOBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

bonus:
	rm -f $(BONUSOBJS)
	
fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean