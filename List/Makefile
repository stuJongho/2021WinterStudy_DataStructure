CC=gcc
NAME=program.out

.PHONY : clean

all : LinkedList.o main.o
	$(CC) -o $(NAME) $^

LinkedList.o : LinkedList.c
	$(CC) -c $<

main.o : main.c
	$(CC) -c $<

clean :
	rm *.o $(NAME)