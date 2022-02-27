CC = gcc
NAME = program.out

.PHONY : clean

all : ListBaseStack.o ListBaseStackMain.o
	$(CC) $^ -o $(NAME)

ListBaseStack.o : ListBaseStack.c
	$(CC) -c $<

ListBaseStackMain.o : ListBaseStackMain.c
	$(CC) -c $<

clean :
	rm -rf *.o $(NAME)