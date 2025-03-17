main: main.o stack.o
	gcc -o main main.o stack.o
main.o: main.c stack.h
	gcc -c -g main.c
stack.o: stack.c stack.h
	gcc -c -g stack.c