CC=gcc
NAME=program.exe

.PHONY : clean

all : LinkedList.o main.o
	$(CC) -o $(NAME) $^

LinkedList.o : LinkedList.c
	$(CC) -c $<

main.o : main.c
	$(CC) -c $<

clean :
	del *.o $(NAME)