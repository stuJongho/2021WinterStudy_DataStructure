#include <stdio.h>
#include "ListBaseQueue.h"
#include <stdlib.h>

int main(void)
{
	Queue queue;
	QueueInit(&queue);

	while (1)
	{
		int selection = 0, num;
		printf("1.enqueue, 2.dequeue, 0.exit\n");
		scanf("%d", &selection);

		switch (selection)
		{
		case 1:
			printf("enqueue할 정수 입력: ");
			scanf("%d", &num);
			Enqueue(&queue, num);
			break;
		
		case 2:
			if(!QIsEmpty(&queue))
				printf("%d\n", Dequeue(&queue));
			else
				printf("큐가 비었습니다.\n");
			break;
		case 0:
			return 0;
		}
	}
	return -1;
}