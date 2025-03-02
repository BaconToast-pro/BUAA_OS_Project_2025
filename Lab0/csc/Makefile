all: code/fibo.c code/main.c include/fibo.h
	gcc -c code/fibo.c -o code/fibo.o -I include
	gcc -c code/main.c -o code/main.o -I include
	gcc -o fibo code/fibo.c code/main.c -I include
clean: code/fibo.o code/main.o
	rm code/fibo.o
	rm code/main.o
