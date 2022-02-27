CC = gcc
NAME = program.exe

.PHONY : clean

all : ListBaseQueue.o ListBaseQueueMain.o
	$(CC) $^ -o $(NAME)

ListBaseQueue.o : ListBaseQueue.c
	$(CC) -c $<

ListBaseQueueMain.o : ListBaseQueueMain.c
	$(CC) -c $<

clean :
	del -rf *.o $(NAME)