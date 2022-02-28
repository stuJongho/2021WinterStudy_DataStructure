#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <termio.h>

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

char* makeCommand(char* command, char* program){
    strcat(command, program);
    strcat(command, "/program.out");
    return command;
}

int main(void){
    char* programs[] = {"", "List", "Stack", "Queue", "PriorityQueue", "AVLTree", "BinarySearchTree", "HashTable", "Sorting"};

    while (1)
    {
        char command[40] = "";
        system("clear");
        printf(" 1.List\n 2.Stack\n 3.Queue\n 4.PriorityQueue\n 5.AVLTree\n 6.BinarySearchTree\n 7.HashTable\n 8.Sorting\n 0.Exit");
        int selection = getch() - '0';

        if(selection != 0){
            system("clear");
            system(makeCommand(command, programs[selection]));
        }
        else
            return 0;
    }
    
    return -1;
}