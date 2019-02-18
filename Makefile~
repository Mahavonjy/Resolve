CC	= gcc

CFLAGS	= -Wall -Wextra -Werror

NAME	= mmc
RM	= rm -f

SRC	= \
	mmc.c \
	main.c \
	my_func.c
OBJ	= $(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	gcc $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all $(NAME) clean fclean re

