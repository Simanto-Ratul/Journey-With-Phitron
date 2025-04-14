#include <stdio.h>
int main()
{
    // Post Increment
    int x = 10;
    int y = x++;
    printf("%d %d\n", x, y);

    int p = 10;
    int q = p++;
    int r = ++q;
    printf("%d\n", r++);
    printf("%d\n", r);

    // Pre Increment
    int a = 10;
    int b = ++a;
    printf("%d %d\n", a, b);
    return 0;

    int m = 10;
    ++m;
    printf("%d\n", ++m);
}