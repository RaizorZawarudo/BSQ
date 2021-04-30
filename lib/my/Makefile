##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Task01
##
CFLAGS = -g3 -W -Wall -Wextra

SRC	=	*.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -c $(SRC)
		ar rc $(NAME) $(OBJ)
		cp $(NAME) ../

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re