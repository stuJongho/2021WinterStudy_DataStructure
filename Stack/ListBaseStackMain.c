#include <stdio.h>
#include "ListBaseStack.h"
#include <stdlib.h>

int main(void)
{
	// Stack의 생성 및 초기화 ///////
	Stack stack;
	StackInit(&stack);

	while (1)
	{
		int selection = 0, num;
		printf("1.push, 2.pop, 0.exit\n");
		scanf("%d", &selection);

		switch (selection)
		{
		case 1:
			printf("push할 정수 입력: ");
			scanf("%d", &num);
			SPush(&stack, num);
			break;
		
		case 2:
			if(!SIsEmpty(&stack))
				printf("%d\n", SPop(&stack));
			else
				printf("스택이 비었습니다.\n");
			break;
		case 0:
			return 0;
		}
	}
	return -1;
}