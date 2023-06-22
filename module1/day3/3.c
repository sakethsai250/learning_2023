/*4. Find the largest number by deleting single digit in a 4 digit number 5872 - 872, 9856 - 986

Concepts to be used.
- Loops
- Operators
*/

#include <stdio.h>
int findlargest(int);
int findsmallest(int);

int findsmallest(int number)
{
    while (number != 0)
    {
        int rem, min = 10;
        rem = number % 10;
        number = number / 10;
        if (min > rem)
        {
            min = rem;
        }
    }
    return min;
}

int findlargest(int number)
{
    while (number != 0)
    {
        int rem, max = 0;
        rem = number % 10;
        number = number / 10;
        if (max > rem)
        {
            max = rem;
        }
    }
    return max;
}

int main()
{
    int n;
    printf("enter number");
    scanf("%d", &n);

    int max, min;
    max = findlargest(n);
    min = findlargest(n);
}
