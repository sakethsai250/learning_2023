/*Prints Bits:
Scan a 32bit integer and prints its bits.

Concepts to be used.
- Loops
- Bitwise Operators
*/

#include <stdio.h>

void printBits(int num)
{
    for (int i = 31; i >= 0; i--)
    {
        int bit = (num >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int main()
{
    int num;

    printf("Enter a 32-bit integer");
    scanf("%d", &num);

    printf("Bits");
    printBits(num);

    return 0;
}
