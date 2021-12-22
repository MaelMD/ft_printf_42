# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmohamme <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/20 17:52:44 by mmohamme          #+#    #+#              #
#    Updated: 2021/12/20 19:41:19 by mmohamme         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
INC = ft_printf.h
SRCS = ft_printf.c ft_printf_utils.c ft_printf_utils2.c
OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Wextra -Werror
CC = gcc
RM = rm -rf
AR = ar -rc

all: $(NAME)

$(NAME): $(OBJS) $(INC)
		$(AR) $(NAME) $(OBJS)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all
