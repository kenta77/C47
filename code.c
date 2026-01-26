#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void) 
{
    // 手段①
    char array[1024] = "C";
    char* msg1 = array;
    printf("%s", msg1);

    // 手段②
    char* msg2 = (char*)malloc(1024);
    msg2[0] = 'C';
    msg2[1] = '\0';
    printf("%s", msg2);
    free(msg2);

    // 手段③
    const char* msg3 = "C";
    printf("%s", msg3);

    printf("\n");
    return 0;
}