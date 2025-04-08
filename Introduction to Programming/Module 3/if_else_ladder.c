#include <stdio.h>
int main()
{
    int tk;
    printf("Enter your ammount : ");
    scanf("%d", &tk);
    if (tk >= 100)
    {
        printf("You can eat burger.");
    }
    else if (tk >= 80)
    {
        printf("You can eat ramen.");
    }
    else if (tk >= 50)
    {
        printf("You can eat noodles.");
    }
    else
    {
        printf("There is nothing for this ammount. Please add more money!");
    }
    return 0;
}