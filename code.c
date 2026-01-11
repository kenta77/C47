#include <stdio.h>

void funcA(int x) 
{
    x = 100;
}

void funcB(int x[3])
{
    x[0] = 100;
}

int main(void)
{
    int a = 5;
    int b[3];
    b[0] = 5;

    funcA(a);
    funcB(b);

    printf("a=%d, b[0]=%d\n", a, b[0]);
    return 0;
}