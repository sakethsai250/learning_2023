/*3. Write a program to sum every alternate elements of a given array starting for element 0
For example, let's say we have a[5] = {10, 20, 30, 40, 50}, the result should be 10 + 30 + 50 = 90

Topics to be covered
- Arrays
- Loops
- Basic Operators
*/

#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    int arr[n];
    printf("\nenter the size of the array");
    scanf("%d", &n);
    printf("enter array elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("displaying array elements\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    printf("adding alternative elements in the array\n");
    for (i = 0; i < n; i += 2)
    {
        printf("%d\n", arr[i]);
        sum = sum + arr[i];
    }

    printf("\nsum of alternate elements is %d", sum);
}