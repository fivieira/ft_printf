# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fivieira <fivieira@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/22 16:05:24 by fivieira          #+#    #+#              #
#    Updated: 2023/05/06 16:45:55 by fivieira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC = ft_printf.c is_argument.c handle_argument_format.c handle_char.c handle_decimal.c handle_hexadecimal.c handle_percent.c handle_pointer.c \
handle_string.c handle_unsigned_decimal.c

OBJS = ${SRC:.c=.o}

INCLUDE = -I .

CC = cc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

LIBFT_PATH = libft

LIBFT = ${LIBFT_PATH}/libft.a

.c.o:
		${CC} ${CFLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

all:    ${NAME}

clean:
		${MAKE} ${LIBFT_PATH} clean
		${RM} ${OBJS} 

fclean: clean
		${MAKE} ${LIBFT_PATH} clean
		${RM} ${NAME}

tclean: clean
		${RM} teste

re: fclean all

.PHONY: all clean fclean re