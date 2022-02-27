CC = gcc
NAME = program.out
MAKE = make

SUBDIRS = AVLTree BinarySearchTree HashTable List PriorityQueue Queue Sorting Stack

.PHONY : clean subdirs $(SUBDIRS)

all : main.c $(SUBDIRS)
	$(CC) $< -o $(NAME)

$(SUBDIRS) :
	$(MAKE) -C $@

clean :
	find . -name '*.o' -exec rm {} \;
	find . -name '*.out' -exec rm {} \;