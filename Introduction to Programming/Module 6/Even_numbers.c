#include <stdio.h>
int main()
{
    int n, hasEven = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
            hasEven = 1;
        }
        else
        {
            printf("%d","-1");
        }
    }
    return 0;
}