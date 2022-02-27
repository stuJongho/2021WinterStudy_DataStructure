CC=gcc
NAME=program.exe

.PHONY : clean

all : PriorityQueue.o UsefulHeap.o main.o
	$(CC) -o $(NAME) $^

PriorityQueue.o : PriorityQueue.c
	$(CC) -c $<

UsefulHeap.o : UsefulHeap.c
	$(CC) -c $<

main.o : main.c
	$(CC) -c $<

clean :
	del *.o $(NAME)