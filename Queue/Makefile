CC = gcc
NAME = program.out

.PHONY : clean

all : ListBaseQueue.o ListBaseQueueMain.o
	$(CC) $^ -o $(NAME)

ListBaseQueue.o : ListBaseQueue.c
	$(CC) -c $<

ListBaseQueueMain.o : ListBaseQueueMain.c
	$(CC) -c $<

clean :
	rm -rf *.o $(NAME)