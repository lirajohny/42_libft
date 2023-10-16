# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlira <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/17 15:54:16 by jlira             #+#    #+#              #
#    Updated: 2023/10/15 11:15:45 by jlira            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Definição das variáveis
SRCS := $(wildcard *.c)
OBJS    = ${SRCS:.c=.o}
INCS    = includes
CFLAGS  = -Wall -Wextra -Werror
NAME = libft.a
# Regra para transformar arquivos .c em .o
.c.o:
	cc ${CFLAGS} -c $< -o $@ -I ${INCS}
# Regra para criar a biblioteca libft.a
libft.a: ${OBJS}
	ar rc libft.a ${OBJS}
	ranlib libft.a

# Regra padrão - o que será executado quando você apenas digitar 'make'
all: ${NAME}

# Regra para limpar/remover arquivos objeto
clean:
	rm -f ${OBJS}

# Regra para limpar/remover tanto arquivos objeto quanto a biblioteca
fclean: clean
	 rm -f libft.a

# Regra para refazer tudo (limpar e recompilar)
re: fclean all
