/*difference between even and odd*/

#include <stdio.h>
int calculateDifference(int arr[], int size);

int calculateDifference(int arr[], int size)
{
    int sumEven = 0;
    int sumOdd = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sumEven += arr[i];
        }
        else
        {
            sumOdd += arr[i];
        }
    }

    return sumEven - sumOdd;
}

int main()
{
    int size, arr[size], i;

    printf("enter size of array");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("enter array numbers");
        scanf("%d", &arr[i]);
    }

    int difference = calculateDifference(arr, size);

    printf("Difference between sum of even and odd elements: %d\n", difference);

    return 0;
}