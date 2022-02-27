CC = gcc
NAME = program.out

.PHONY : clean

all : BinarySearchTree.o BinarySearchTreeMain.o BinaryTree2.o
	$(CC) $^ -o $(NAME)

BinarySearchTree.o : BinarySearchTree.c BinarySearchTree.h BinaryTree2.h
	$(CC) -c BinarySearchTree.c

BinarySearchTreeMain.o : BinarySearchTreeMain.c BinarySearchTree.h
	$(CC) -c BinarySearchTreeMain.c

BinaryTree2.o : BinaryTree2.c BinaryTree2.h
	$(CC) -c BinaryTree2.c

clean :
	rm -f *.o $(NAME)