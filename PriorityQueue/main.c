#include <stdio.h>
#include "PriorityQueue.h"

int DataPriorityComp(char ch1, char ch2)
{
    return ch2 - ch1;
}

int main(void)
{
    int userSelect, data;
    PQueue pq;
    PQueueInit(&pq, DataPriorityComp);

    // 0: 데이터 삽입, 1: 데이터 삭제, 2: 프로그램 종료
    while (1)
    {
        printf("0: 데이터 삽입, 1: 데이터 삭제, 2: 프로그램 종료\n");
        printf("select menu: ");
        scanf("%d", &userSelect);

        switch (userSelect)
        {
        case 0:
            printf("insert: ");
            scanf("%d", &data);
            PEnqueue(&pq, data);
            break;

        case 1:
            printf("dequeued %d\n", PDequeue(&pq));
            break;

        case 2:
            return 0;
        default:
            printf("Invalid Select\n");
        }
    }

    return 0;
}
