##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## makefile for my_runner
##

SRC		=		src/main.c		\
				src/events.c	\
				src/free.c 		\

NAME	=		my_whatiwant

FLAGS	=		-L./lib/my -lmy -L./lib/menu -lmenu -I./include

CFLAGS	=		-lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

MORE	=		-Wall -Wextra

all:	$(NAME)

$(NAME):
		make -C ./lib/my re
		make -C ./lib/menu re
		gcc -O3 -o $(NAME) $(SRC) $(FLAGS) $(CFLAGS) $(MORE)

clean:
		rm -f $(OBJ)
		make -C ./lib/my clean
		make -C ./lib/menu clean

fclean:	clean
		rm -f $(NAME)
		make -C ./lib/my fclean
		make -C ./lib/menu fclean
		rm -f vgcore.*

re: fclean all

valgrind: fclean
	make -C ./lib/my valgrind
	make -C ./lib/menu valgrind
	gcc -g -O3 -o $(NAME) $(SRC) $(FLAGS) $(CFLAGS) $(MORE)
	valgrind -s --leak-check=full --track-origins=yes ./$(NAME) maps/map01
