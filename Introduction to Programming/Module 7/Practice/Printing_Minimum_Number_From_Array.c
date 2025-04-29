#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = arr[0]; //Assume the first element is minimum
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min) // Then compare
        {
            min = arr[i];
        }
    }
    printf("%d", min);
    return 0;
}