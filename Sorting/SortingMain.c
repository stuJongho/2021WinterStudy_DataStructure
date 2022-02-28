#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void){
    const char* programs[] = {"BubbleSort", "HeapSort", "MergeSort", "QuickSort", "SelectionSort"};

    for (int i = 0; i < sizeof(programs) / sizeof(char*); i++)
    {
        char command[40] = "./Sorting/";
        strcat(command, programs[i]);
        strcat(command, ".out");

        printf("- %s\n", programs[i]);
        for (int j = 0; j < 3; j++)
        {
            system(command);
            printf("\n");
        }
    }

    char ch;
    printf("Press ENTER key to Continue\n");
    scanf("%c",&ch);

    return 0;
}