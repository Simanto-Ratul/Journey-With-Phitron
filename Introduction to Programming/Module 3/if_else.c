#include <stdio.h>
int main()
{
    int tk;
    printf("Enter your ammount : ");
    scanf("%d", &tk);

    if (tk >= 100)
    {
        printf("You can buy a burger.");
    }
    else
    {
        printf("You can't buy. Add more money!");
    }
    return 0;
}