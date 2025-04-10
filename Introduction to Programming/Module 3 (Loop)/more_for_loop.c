#include <stdio.h>
int main()
{
    int n;
    int mul;
    printf("Enter your number : ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        mul = n * i;
        printf("%d x %d = %d\n", n, i, mul);
    }
    return 0;
}