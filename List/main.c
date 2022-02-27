#include <stdlib.h>
#include <stdio.h>
#include "LinkedList.h"



int main(void)
{
    int userSelect, data;
    List list;
    ListInit(&list);

    // 0: 데이터 삽입, 1: 데이터 삭제, 2: 프로그램 종료
    while (1)
    {
        printf("select menu: ");
        scanf("%d", &userSelect);
        
        switch (userSelect)
        {
        case 0:
            printf("insert: ");
            scanf("%d", &data);
            LInsert(&list, data);
            ShowAll(&list);
            break;

        case 1:
            printf("delete: ");
            scanf("%d", &data);
            int rdata;
            if(LFirst(&list, &rdata))
            {
                if(data == rdata)
                    LRemove(&list);
                
                while(LNext(&list, &rdata))
                {
                    if(data == rdata)
                        LRemove(&list);
                }
            }
            ShowAll(&list);
            break;

        case 2:
            return 0;
        default:
            printf("Invalid Select");
        }
    }

    return 0;
}