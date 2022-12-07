CC=gcc

main: main.o mul.o div.o
	$(CC)-o-main main.o mul.o div.o
main.o: main.c
	$(CC) -c -o main.o main.c
mul.o: mul.c
	$(CC) -c -o mul.o mul.c
div.o: div.c
	$(CC) -c -o div.o div.c