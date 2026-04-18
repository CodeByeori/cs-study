#include <stdio.h>
#define SIZE 3

int main()
{
    int number[SIZE][SIZE] = {};

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("matrix [%d][%d] is: ", i, j);
            scanf("%d", &number[i][j]);
        }
    }
    printf(" === MATRIX ===\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d ", number[i][j]);
        }
        printf("\n");
    }
    return 0;
}