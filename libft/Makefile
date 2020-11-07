NAME = libft.a
FLAGS = -Wall -Wextra -Werror
SRC = *.c
OBJ = $(SRC:.c=.o)

.PHONY:		$(NAME) all clean fclean re

all:		$(NAME)

$(NAME):	$(OBJ)
			ar rc $(NAME) $(OBJ)
			ranlib $(NAME)

%.o: %.c	$(SRC)
			gcc $(FLAGS) -c $(SRC)

clean:
			rm -rf $(OBJ)
		
