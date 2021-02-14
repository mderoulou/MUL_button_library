##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## My makefile
##

all:	build

build:
		gcc -c *.c -Wall -Wextra
		ar rc libmenu.a *.o
		cp libmenu.a ../
		cp menu.h ../../include/
		rm -f *.o

clean:
		rm -f *.o

fclean:
		rm -f *.o
		rm -f libmenu.a
		rm -f ../libmenu.a
		rm -f ../../include/menu.h

re: clean all

valgrind: fclean
	gcc -g -c *.c -Wall -Wextra
	ar rc libmenu.a *.o
	cp libmenu.a ../
	cp menu.h ../../include/
	rm -f *.o
