# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bouattar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/05 15:15:30 by bouattar          #+#    #+#              #
#    Updated: 2021/04/14 14:00:25 by bouattar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a

INCLUDE = libft.h

SRCS = ft_atoi.c \
	   ft_bzero.c \
	   ft_calloc.c \
	   ft_isalnum.c \
	   ft_isalpha.c \
	   ft_isascii.c \
	   ft_isdigit.c \
	   ft_isprint.c \
	   ft_itoa.c \
	   ft_memccpy.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_memcpy.c \
	   ft_memmove.c \
	   ft_memset.c \
	   ft_putchar_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c \
	   ft_putstr_fd.c \
	   ft_split.c \
	   ft_strchr.c \
	   ft_strdup.c \
	   ft_strjoin.c \
	   ft_strlcat.c \
	   ft_strlcpy.c \
	   ft_strlen.c \
	   ft_strmapi.c \
	   ft_strncmp.c \
	   ft_strnstr.c \
	   ft_strrchr.c \
	   ft_strtrim.c \
	   ft_substr.c \
	   ft_tolower.c \
	   ft_toupper.c 

OBJS = $(SRCS:.c=.o)

SRC_BONUS = ft_lstnew.c \
			ft_lstadd_front.c \
		    ft_lstsize.c \
		    ft_lstlast.c \
		    ft_lstiter.c 	

OBJ_BONUS = ${SRC_BONUS:.c=.o}

CC = gcc

RM = rm -rf

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

%.o:%.c
	${CC} ${FLAGS} -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean: 
	${RM} $(OBJS) ${OBJ_BONUS}

fclean: clean
	${RM} $(NAME)

re: fclean ${NAME}

bonus: ${OBJ_BONUS}
	ar rcs ${NAME} ${OBJ_BONUS}

.PHONY: all bonus clean fclean re
