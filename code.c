#include <stdio.h>

typedef char String[1024];

int main(void) 
{
    printf("(1)char型：%dバイト\n", (int)sizeof(char));
    printf("(2)int型：%dバイト\n", (int)sizeof(int));
    printf("(3)char*型：%dバイト\n", (int)sizeof(char*));
    printf("(4)int*型：%dバイト\n", (int)sizeof(int*));

    return 0;
}