#include <stdio.h>
int main()
{
    int n;
    printf("Enter your number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (n % 2 == 0)
        {
            printf("%d - Even Number.\n", i);
        }
        else
        {
            printf("%d - Odd Number.\n ", i);
        }
    }
    return 0;
}