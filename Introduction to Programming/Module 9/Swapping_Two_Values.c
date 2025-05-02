#include <stdio.h>
int main()
{
    int a, b;
    a = 10;
    b = 20;
    int tem = a;

    a = b;
    b = tem;
    printf("A = %d\nB = %d", a, b);
    return 0;
}