#include <stdio.h>
int main()
{
    int n;
    printf("Enter your number : ");
    scanf("%d", &n);
    if (n >= 0)
    {
        printf("You have entered a positive number.");
    }
    else
    {
        printf("You have entered a negative number.");
    }
    return 0;
}