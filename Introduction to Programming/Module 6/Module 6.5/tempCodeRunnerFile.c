#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int x = n / 10;
    int y = n % 10;
    if (y != 0 && x % y == 0 || y % x == 0 && x != 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}