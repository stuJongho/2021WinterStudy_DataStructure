CC = gcc
NAME = program.exe

.PHONY : clean

all : ListBaseStack.o ListBaseStackMain.o
	$(CC) $^ -o $(NAME)

ListBaseStack.o : ListBaseStack.c
	$(CC) -c $<

ListBaseStackMain.o : ListBaseStackMain.c
	$(CC) -c $<

clean :
	del -rf *.o $(NAME)