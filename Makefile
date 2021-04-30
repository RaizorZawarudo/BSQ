##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Task01
##
CFLAGS = -g3 -W -Wall -Wextra

SRC	=	main.c \
		bsq_utilities.c \
		bsq_utilities2.c \

OBJ	=	$(SRC:.c=.o)

NAME	=	bsq

all:	$(NAME) clean

$(NAME):	$(OBJ)
	cd lib/my/ && make
	cd ../..
	gcc -o $(NAME) $(OBJ) -I./include -L./lib -lmy

clean:
	cd lib/my && make clean
	cd ../..
	rm -f $(OBJ)

fclean:	clean
	cd lib/my && make fclean
	cd ../..
	rm -f $(NAME)
re: fclean all

unit_test:
	gcc -lcriterion

.PHONY: all clean fclean re