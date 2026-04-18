#include <stdio.h>
#define SIZE 5

int main()
{
    int number[SIZE] = {};
    for (int i = 0; i < SIZE; i++)
    {
        printf("Box %d is: ", i);
        scanf("%d", &number[i]);
    }

    printf("Box number is {");
    for (int i = 0; i < SIZE; i++)
    {
        printf(" %d ", number[i]);
    }
    printf("}\n");

    // finding max
    int max = number[0];
    for (int i = 1; i < SIZE; i++)
    {
        if (number[i] > max)
        {
            max = number[i];
        }
    }
    printf("max number is %d", max);
    return 0;
}