COMPILER = gcc
CFLAGS = -ansi -Wall -Werror -pedantic
play: lyw_game lyw_coin.o
	.\lyw_game.exe
lyw_game: lyw_game.c lyw_coin.o
	{COMPILER} {CFLAGS} -o $@ $^
lyw_coin.o: lyw.c lyw.h
	{COMPILER} {CFLAGS} -c $<
