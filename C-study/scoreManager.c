#include <stdio.h>
#define SIZE 3

void inputScore(int arr[], int len);
void displayScore(int arr[], int len);
int getMax(int arr[], int len);
double calcAvg(int arr[], int len);

int main()
{
    int score[SIZE] = {};
    int len = SIZE;

    inputScore(score, len);
    displayScore(score, len);

    int maxVal = getMax(score, len);
    double avgVal = calcAvg(score, len);

    printf("Max is %d, Average is %f", maxVal, avgVal);

    return 0;
}

void inputScore(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("score %d is ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void displayScore(int arr[], int len)
{
    printf("{");
    for (int i = 0; i < len; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("}\n");
}

int getMax(int arr[], int len)
{
    int max = arr[0];
    for (int i = 1; i < len; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

double calcAvg(int arr[], int len)
{
    int total = 0;
    for (int i = 0; i < len; i++)
    {
        total += arr[i];
    }
    return (double)total / len;
}