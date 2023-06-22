/*5. Write a program to find both smallest and largest digits in given n numbers
For example let's say we have n = 3, and n1 = 8, n2 = 156, n3 = 123450, the result will be "Not Valid", 1 and 6, 0 and 5
*/

#include <stdio.h>
int findlargest(int);
int findsmallest(int);

int findsmallest(int number)
{
    if (number < 10)
    {
        printf("not valid");
        return 0;
    }

    int rem, min = 10;
    while (number != 0)
    {
        rem = number % 10;

        if (rem < min)
        {
            min = rem;
        }
        number = number / 10;
    }
    return min;
}

int findlargest(int number)
{
    if (number < 10)
    {
        printf("not valid");
        return 0;
    }
    int rem, max = 0;
    while (number != 0)
    {
        rem = number % 10;
        if (rem > max)
        {
            max = rem;
        }
        number = number / 10;
    }
    return max;
}

int main()
{
    int n;
    printf("enter number");
    scanf("%d", &n);

    int maximum, minimum;

    maximum = findlargest(n);
    printf("%d", maximum);

    minimum = findlargest(n);
    printf("%d", minimum);

    return 0;
}