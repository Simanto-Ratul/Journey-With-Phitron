#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf("Enter your number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("Total sum is : %d", sum);
    return 0;
}