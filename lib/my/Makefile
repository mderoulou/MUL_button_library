##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## My makefile
##

all:	build

build:
		gcc -c *.c
		ar rc libmy.a *.o
		cp libmy.a ../
		cp my.h ../../include/
		rm -f *.o

clean:
		rm -f *.o

fclean:
		rm -f *.o
		rm -f libmy.a
		rm -f ../libmy.a
		rm -f ../../include/my.h

re: clean all

valgrind: fclean
	gcc -g -c *.c
	ar rc libmy.a *.o
	cp libmy.a ../
	cp my.h ../../include/
	rm -f *.o
