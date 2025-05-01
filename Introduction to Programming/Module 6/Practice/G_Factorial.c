#include <stdio.h>
int main()
{
    int n;
    int t;
    scanf("%d", &n);
    for (int i = 1; i <= t; i++)
    {
        scanf("%d", &t);
        printf("%d\n", i * t);
    }
    return 0;
}