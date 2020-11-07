NAME = libft.a
FLAGS = -Wall -Wextra -Werror
SRC = *.c
OBJ = $(SRC:.c=.o)

.PHONY:		$(NAME) all clean fclean re

all:		$(NAME)

$(NAME):	$(OBJ)
			@ar rc $(NAME) $(OBJ)
			@ranlib $(NAME)
			@echo "Libft success created"

%.o: %.c	$(SRC)
			gcc $(FLAGS) -c $(SRC)

clean:
			@rm -rf $(OBJ)
			@echo "all *.o files been deleted"

fclean:		clean
			@rm $(NAME)
			@echo "Remove libft.a"

re:		fclean all
		
