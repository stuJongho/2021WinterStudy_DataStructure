CC = gcc
NAME = program.exe

.PHONY : clean

all : AVLRebalance.o AVLTreeMain.o BinarySearchTree3.o BinaryTree3.o
	$(CC) $^ -o $(NAME)

BinarySearchTree3.o : BinarySearchTree3.c
	$(CC) -c $< 

BinaryTree3.o : BinaryTree3.c
	$(CC) -c $<

AVLRebalance.o : AVLRebalance.c
	$(CC) -c $<

AVLTreeMain.o : AVLTreeMain.c
	$(CC) -c $<

clean :
	del *.o $(NAME)