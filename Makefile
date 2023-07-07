##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## make
##

SRC		=	my_sokoban.c

OBJ		=	$(SRC:.c=.o)

IFLAGS	=	-I ./include

LFLAGS	= 	-L ./lib/my -lmy

CFLAGS	=	-W -Wall -Werror -Wextra $(LDFLAGS) $(IFLAGS) $(LFLAGS)

LDFLAGS	=	-lncurses

NAME	=	my_sokoban

all:	$(NAME)

$(NAME): $(OBJ)
		make -C ./lib/my all
		gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		make -C ./lib/my clean
		rm -f $(OBJ)

fclean: clean
		make -C ./lib/my fclean
		rm -f $(NAME)

re:	fclean all
