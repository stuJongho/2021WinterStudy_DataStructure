CC = gcc

.PHONY : clean

all : SortingMain.c BubbleSort.out HeapSort.out MergeSort.out QuickSort.out SelectionSort.out
	gcc $< -o program.out

BubbleSort.out : BubbleSort.c
	gcc $< -o $@

HeapSort.out : HeapSort.c
	gcc $< -o $@

MergeSort.out : MergeSort.c
	gcc $< -o $@

QuickSort.out : QuickSort.c
	gcc $< -o $@

SelectionSort.out : SelectionSort.c
	gcc $< -o $@

clean :
	rm -rf *.out