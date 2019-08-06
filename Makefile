# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vkostenk <vkostenk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/07 12:10:39 by vkostenk          #+#    #+#              #
#    Updated: 2019/02/28 19:48:46 by vkostenk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = vkostenk.filler
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC = *.c
HEADERS = filler.h
LIBFT = Libft/libft.a

OBJ=$(SRC:.c=.o)


all : $(NAME)

$(NAME) : $(LIBFT) $(OBJ)
		Make -C Libft
		$(CC) $(CFLAGS) $(SRC) -o $(NAME) -I $(HEADERS) -L. $(LIBFT)

$(OBJ): $(LIBFT)
		$(CC) $(FLAGS) -c $(SRC)
$(LIBFT):
		make Libft


clean :
		-rm -f $(OBJ)

fclean : clean
		make fclean -C Libft
		-rm -f $(NAME)

re: fclean all
