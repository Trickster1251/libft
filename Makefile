# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: walethea <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/20 18:01:19 by walethea          #+#    #+#              #
#    Updated: 2020/11/20 18:15:13 by walethea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
SRC = *.c
OBJ = $(SRC:.c=.o)

.PHONY:		all clean fclean re

all:		$(NAME)

$(NAME):	$(OBJ)
			ar rc $(NAME) $(OBJ)
			ranlib $(NAME)
			@echo "Libft success created"

%.o: %.c	$(SRC)
			gcc $(FLAGS) -c $(SRC)

clean:
			@rm -rf $(OBJ)
			@echo "all *.o files been deleted"

fclean:		clean
			@rm -f $(NAME)
			@echo "Remove libft.a"

re:			fclean all

bonus:		$(BONUS_OBJ)
			@ar rc $(NAME) $(BONUS_OBJ)
			@ranlib $(NAME)
			@echo "Libft success created"

	
