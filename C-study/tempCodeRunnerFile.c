#include <stdio.h>

int main()
{
    int arr[31] = {};

    for (int i = 0; i < 28; i++)
    {
        int n;
        scanf("%d", &n);
        if (n == (i + 1))
        {
            arr[i] = 1;
        }
    }

    for (int j = 0; j < 31; j++)
    {
        if (arr[j] == 0)
        {
            printf("%d ", j + 1);
        }
    }
}