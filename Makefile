##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

CC  =   gcc

SRC =   src/main.c 			\
		src/calc.c			\
		src/calc_2.c		\
		src/my_atoi.c		\
		src/help.c			\
		src/error_case.c	\
		src/error_case2.c 	\
		src/error_case3.c 	\

OBJ =   $(SRC:.c=.o)

NAME    =   calc

CFLAGS  =   -W -Wall -I include/

LDFLAGS =   -L./lib -lmy

all: $(NAME)

$(NAME):    $(OBJ)
	make -C lib/my/
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	rm -f $(OBJ)
	rm -f *~
	cd lib/my/ && make clean

fclean: clean
	rm -f $(NAME)
	cd lib/my/ && make fclean

re: fclean all

.PHONY: all clean fclean re
