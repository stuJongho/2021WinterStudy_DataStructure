#include <stdio.h>
#include <stdlib.h>
#include <termio.h>
#include "Person.h"
#include "Table2.h"

int getch(void)
{
	int ch;
	struct termios old;
	struct termios new;
	tcgetattr(0, &old);
	new = old;
	new.c_lflag &= ~(ICANON | ECHO);
	new.c_cc[VMIN] = 1;
	new.c_cc[VTIME] = 0;
	tcsetattr(0, TCSAFLUSH, &new);
	ch = getchar();
	tcsetattr(0, TCSAFLUSH, &old);
	return ch;
}

int MyHashFunc(int k)
{
	return k % 100;
}

Table myTbl;

void AddPerson(){
	Person* np;
	int ssn;
	char* name = (char*)malloc(sizeof(char)*50); 
	char* addr = (char*)malloc(sizeof(char)*50);
	scanf(" %d %s %s", &ssn, name, addr);
	np = MakePersonData(ssn, name, addr);
	TBLInsert(&myTbl, GetSSN(np), np);
}

void SearchPerson(){
	Person* sp;
	int ssn;
	scanf("%d", &ssn);
	sp = TBLSearch(&myTbl, ssn);
	if(sp != NULL)
		ShowPerInfo(sp);
	else
		printf("찾으시는 사람은 존재하지 않습니다.");
}

void DeletePerson(){
	Person* rp;
	int ssn;
	scanf("%d", &ssn);
	rp = TBLDelete(&myTbl, ssn);
	if(rp != NULL)
		free(rp);
}

int main(void)
{
	TBLInit(&myTbl, MyHashFunc);
	int choice = 0;

	do
	{
		system("cls");
		printf("1. 사람 추가, 2. 사람 검색, 3. 사람 삭제, 0. 종료\n");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			printf("주민등록번호 이름 주소를 공백으로 구분하여 입력해주세요.\n");
			AddPerson();
			break;
		
		case 2:
			printf("찾으실 사람의 주민등록 번호를 입력하여 주세요.\n");
			SearchPerson();
			getch();
			break;

		case 3:
			printf("삭제하실 사람의 주민등록 번호를 입력하여 주세요.\n");
			DeletePerson();
			break;
		
		default:
			break;
		}
	} while (choice != 0);
	

	return 0;
}