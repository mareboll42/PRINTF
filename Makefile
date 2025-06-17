# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mareboll <mareboll@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/21 15:48:45 by mareboll          #+#    #+#              #
#    Updated: 2025/05/21 15:48:46 by mareboll         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a  
HEADER = libft.h          
SRC = printf.c ft_putchar.c ft_putstr.c ft_putnbr.c

OBJ = $(SRC:.c=.o)

CC = cc                      
CFLAGS = -Wall -Wextra -Werror 
AR = ar rcs

all: $(NAME)



$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)  

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
.PHONY: all clean fclean re
