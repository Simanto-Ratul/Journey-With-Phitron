#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    int sum = a + b;
    printf("Summation = %d\n", sum);
    int sub = a - b;
    printf("Substraction = %d\n", sub);
    int mul = a * b;
    printf("Multiplication = %d\n", mul);
    float div = a / b;
    printf("Division = %f\n", div);
    int rem = a % b;
    printf("Reminder %d\n", rem);
    return 0;
}