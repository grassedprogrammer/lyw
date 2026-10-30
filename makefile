COMPILER = gcc
CFLAGS = -ansi -Wall -Werror -pedantic

play:
	${COMPILER} ${CFLAGS} -c lyw.o lyw.c
	${COMPILER} ${CFLAGS} -o lyw lyw_game.c lyw.o 
