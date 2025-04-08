#include <stdio.h>
int main()
{
    int a;
    float f;
    char c;

    printf("Enter an integer number : ");
    scanf("%d", &a);
    printf("Integer number is : %d\n", a);

    printf("Enter a float number : ");
    scanf("%f", &f);
    printf("Float number is : %f\n", f);

    printf("Enter a charecter : ");
    scanf("%c", &c);
    printf("Character is : %c \n", c);
    return 0;
}