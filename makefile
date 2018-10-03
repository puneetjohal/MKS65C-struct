all: struct.o
	gcc struct.o

run:
	./a.out

struct.o: struct.c
	gcc -c struct.c
