a: client.o stack.o
	gcc client.o stack.o
client.o: client.c 
	gcc -c client.c
stack.o:  stack.c stack.h
	gcc -c stack.c