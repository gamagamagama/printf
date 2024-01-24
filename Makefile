# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/28 14:08:39 by mgavorni          #+#    #+#              #
#    Updated: 2023/11/28 14:09:26 by mgavorni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror -c

SOURCES = ft_printf.c
		 


OBJECTS = ${SOURCES:.c=.o}

NAME = libftprintf.a


all: ${NAME}

.c.o:
	cc $(CFLAGS) $< -o ${<:.c=.o}

${NAME}: ${OBJECTS}
	ar rcs ${NAME} ${OBJECTS}

clean:
	rm -f ${OBJECTS}
	

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all, clean, fclean, re