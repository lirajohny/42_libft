# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlira <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 11:51:20 by jlira             #+#    #+#              #
#    Updated: 2023/10/18 12:32:21 by jlira            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS := $(wildcard *.c)
OBJS    = ${SRCS:.c=.o}
CFLAGS  = -Wall -Wextra -Werror
.c.o:
	cc ${CFLAGS} -c $< -o $@
$(NAME): ${OBJS}
	ar rc libft.a ${OBJS}
	ranlib libft.a

all: ${NAME} 

clean:
	rm -f ${OBJS}

fclean: clean
	 rm -f libft.a

re: fclean all 
