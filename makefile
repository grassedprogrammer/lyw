COMPILER = gcc
CFLAGS = -ansi -Wall -Werror -pedantic
compile_string:
	{COMPILER} {CFLAGS} -c lyw_string lyw_string.c