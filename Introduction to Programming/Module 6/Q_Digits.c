#include <stdio.h>
int main()
{
    int a;
    int n;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        scanf("%d", &n);
        if (n == 0)
        {
            printf("0");
        }
        while (n != 0)
        {
            printf("%d ", n % 10);
            n /= 10;
        }
        printf("\n");
    }
    return 0;
}