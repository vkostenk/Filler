# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vkostenk <vkostenk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/26 12:06:46 by vkostenk          #+#    #+#              #
#    Updated: 2018/07/16 16:21:24 by vkostenk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc -c
AR = ar rc
W = -Wall -Wextra -Werror
HEADER = libft.h
SRC = ft_atoi.c\
			ft_bzero.c\
			ft_isalnum.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isdigit.c\
			ft_isprint.c\
			ft_itoa.c\
			ft_lstadd.c\
			ft_lstdel.c\
			ft_lstdelone.c\
			ft_lstiter.c\
			ft_lstmap.c\
			ft_lstnew.c\
			ft_memalloc.c\
			ft_memccpy.c\
			ft_memcpy.c\
			ft_memcmp.c\
			ft_memchr.c\
			ft_memdel.c\
			ft_memmove.c\
			ft_memset.c\
			ft_putchar_fd.c\
			ft_putchar.c\
			ft_putendl_fd.c\
			ft_putendl.c\
			ft_putnbr_fd.c\
			ft_putnbr.c\
			ft_putstr_fd.c\
			ft_putstr.c\
			ft_strcat.c\
			ft_strchr.c\
			ft_strclr.c\
			ft_strcmp.c\
			ft_strcpy.c\
			ft_strdel.c\
			ft_strdup.c\
			ft_strequ.c\
			ft_striter.c\
			ft_striteri.c\
			ft_strjoin.c\
			ft_strlcat.c\
			ft_strlen.c\
			ft_strmap.c\
			ft_strmapi.c\
			ft_strncat.c\
			ft_strncmp.c\
			ft_strncpy.c\
			ft_strnequ.c\
			ft_strnew.c\
			ft_strnstr.c\
			ft_strrchr.c\
			ft_strsplit.c\
			ft_strstr.c\
			ft_strsub.c\
			ft_strtrim.c\
			ft_tolower.c\
			ft_toupper.c\
			ft_isspace.c\
			ft_count_words.c\
			ft_isnegative.c\
			ft_strrev.c\
			ft_power.c\
			ft_sqrt.c\
			ft_list_size.c\

OBJ=$(SRC:.c=.o)

all: $(NAME)

$(NAME):
	$(CC) $(W) $(SRC) -I $(HEADER)
	$(AR) $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
