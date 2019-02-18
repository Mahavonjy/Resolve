CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

NAME		= chicken_solver
RM			= rm -f

SRC			= \
			read.c

OBJ			= $(SRC:.c=.o)

all:		$(NAME)

$(NAME): 	$(OBJ)
	gcc 	$(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: 		fclean all

.PHONY: all $(NAME) clean fclean re

