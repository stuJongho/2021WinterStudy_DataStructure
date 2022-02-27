CC = gcc
NAME = program.exe

.PHONY : clean

all : ChainedTableMain.o DLinkedList.o Person.o Table2.o
	$(CC) $^ -o $(NAME)

ChainedTableMain.o : ChainedTableMain.c
	$(CC) -c $<

DLinkedList.o : DLinkedList.c
	$(CC) -c $<

Person.o : Person.c
	$(CC) -c $<

Table2.o : Table2.c
	$(CC) -c $<

clean : 
	del -f *.o $(NAME)