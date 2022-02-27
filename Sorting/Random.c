#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void){
    srand(time(NULL));
    printf("{");
    for (int i = 0; i < 5000; i++)
    {
        printf("{");
        for (int j = 0; j < 50; j++)
        {
            printf("%d,",rand()%100);
        }
        printf("\b},");
    }
    
    printf("\b}");
    return 0;
}