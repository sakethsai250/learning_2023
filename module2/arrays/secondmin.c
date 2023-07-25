#include <stdio.h>

int find_second_min(int *arr, int size)
{
    int i, premin = 0, min = 0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            premin = min;
            min = arr[i];
        }
    }
    return premin;
}
void main()
{
    int size;
    printf("enter the size of the array");
    int arr[size];

    int i;
    printf("enter the elements of the array");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int secondmin;
    secondmin = find_second_min(arr, size);

    printf("the 2nd min is %d", secondmin);
}