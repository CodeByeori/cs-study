#include <stdio.h>

int main()
{
    int numbers[11];
    int counts = 1;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for (int j = 0; j < 9; j++)
    {
        if (numbers[j] % 42 != numbers[j + 1] % 42)
        {
            counts++;
        }
    }

    printf("%d", counts);

    return 0;
}