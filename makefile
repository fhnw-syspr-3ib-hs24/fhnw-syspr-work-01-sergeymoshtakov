CC=gcc

CFLAGS=-std=c99 -pedantic -pedantic-errors -Werror -Wall -Wextra

all: args arr_ptr arrays basics bits boolean do_while expr hello limits odd pointers

my_args: my_args.c
my_sizeof: my_sizeof.c
tree: tree.c

clean:
	rm -f my_args
	rm -f my_sizeof
	rm -f tree