NAME = libft.a
FLAGS = -Wall -Wextra -Werror
SRC = *.c
OBJ = $(SRC:.c=.o)

.PHONY:		$(NAME) all clean fclean re

all:		$(NAME)

$(NAME):	$(OBJ)
			ar rc $(NAME) $(OBJ)
			ranlib $(NAME)
			@echo "Libft success created"

%.o: %.c	$(SRC) $(BONUS_SRCS)
			gcc $(FLAGS) -c $(SRC) $(BONUS_SRCS)

clean:
			@rm -rf $(OBJ) $(BONUS_SRCS)
			@echo "all *.o files been deleted"

fclean:		clean
			@rm $(NAME)
			@echo "Remove libft.a"

re:		fclean all

bonus:		$(BONUS_OBJ)
			@ar rc $(NAME) $(BONUS_OBJ)
			@ranlib $(NAME)
			@echo "Libft success created"

	
