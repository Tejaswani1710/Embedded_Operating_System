CC=gcc

main: main.o strlen.o strcpy.o strcmp.o strcat.o strrev.o
	$(CC) -o main main.o strlen.o strcpy.o strcmp.o strcat.o strrev.o

main.o: main.c
	$(CC) -c -o main.o main.c

strlen.o: strlen.c
	$(CC) -c -o strlen.o strlen.c

strcpy.o: strcpy.c
	$(CC) -c -o strcpy.o strcpy.c

strcmp.o: strcmp.c
	$(CC) -c -o strcmp.o strcmp.c

strcat.o: strcat.c
	$(CC) -c -o strcat.o strcat.c

strrev.o: strrev.c
	$(CC) -c -o strrev.o strrev.c

clean:
	rm -rf main.o strlen.o strcpy.o strcmp.o strcat.o strrev.o