##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## make
##

SRC =	$(wildcard *.c)

OBJ = $(SRC:.c=.o)

NAME = libmy.a

all : $(NAME)

$(NAME): $(OBJ)
	ar rc -o $(NAME) $(OBJ)

clean:
	rm -rdf $(OBJ)

fclean: clean
	rm -rdf $(NAME)

re: fclean all
