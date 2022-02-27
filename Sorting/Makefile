CC = gcc

.PHONY : clean

all : SortingMain.c BubbleSort.exe HeapSort.exe MergeSort.exe QuickSort.exe SelectionSort.exe
	gcc $< -o program

BubbleSort.exe : BubbleSort.c
	gcc $< -o $@

HeapSort.exe : HeapSort.c
	gcc $< -o $@

MergeSort.exe : MergeSort.c
	gcc $< -o $@

QuickSort.exe : QuickSort.c
	gcc $< -o $@

SelectionSort.exe : SelectionSort.c
	gcc $< -o $@

clean :
	del -rf *.exe