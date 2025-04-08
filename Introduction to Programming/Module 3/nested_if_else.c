#include <stdio.h>
int main()
{
    int tk;
    printf("Enter your ammount : ");
    scanf("%d", &tk);
    if (tk >= 5000)
    {
        printf("You can visit Cox's Bazar.\n");
        if (tk >= 1000)
        {
            printf("Well, You can visit Saint Martin!\n");
        }
        else
        {
            printf("Then, go to home.");
        }
    }
    else
    {
        printf("Stay home :) ");
    }
    return 0;
}