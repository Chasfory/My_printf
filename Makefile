##
## EPITECH PROJECT, 2021
## makefile
## File description:
## semestre1
##

SRC     =       src/my_printf.c\
		src/fonct_printf.c\
		src/fonct_printf_bis.c\
		src/wrapper_fonct.c\
		src/wrapper_fonct_bis.c\
		src/wrapper_fonct_tree.c\
		src/my_putchar.c\
		src/my_put_nbr.c\
		src/my_putnbr_unsigned.c\
		src/my_putstr.c\
		src/my_revstr.c\
		src/my_strlen.c\

SRC_TEST        =       tests/test.c

OBJ     =       $(SRC:.c=.o)

OBJ2    =       $(SRC_TEST:.c=.o)

NAME    =       libmy.a

CFLAGS  =       -Wall -Wextra -I./include

CRIT_FLAGS      =       --coverage -lcriterion

NAME_TEST       =       unit_test

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	rm -f -r *~
	rm -f *gc*

fclean: clean
	rm -f $(NAME)
	rm -f $(NAME_TEST)

unit_test: fclean $(NAME)
	gcc -o $(NAME_TEST) $(SRC) $(SRC_TEST) $(CFLAGS) $(CRIT_FLAGS)

tests_run: unit_test
	./$(NAME_TEST)
	gcovr --exclude tests/
	gcovr -b --exclude tests/

re: fclean all

.PHONY: all clean fclean unit_test tests_run re
