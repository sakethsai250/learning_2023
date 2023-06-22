/*1. Write a program to print exponent part of double variable in hexadecimal and binary format.
lets say we have x = 0.7, the exponent in hex is 0x3FE and 0b01111111110
You may use the below link to validate you output
https://baseconvert.com/ieee-754-floating-point

Topics to be covered
- Pointers
- Bitwise Operators
*/

#include <stdio.h>

void printExponent(double num)
{
    long exponent;
    char *ptr = (char *)&num;

    exponent = ((long)ptr[7] & 0x7F) << 4;
    exponent |= ((long)ptr[6] & 0xF0) >> 4;

    printf("Exponent in hexadecimal", exponent);

    printf("Exponent in binary");
    for (int i = 10; i >= 0; i--)
    {
        long bit = (exponent >> i) & 1;
        printf("%llu", bit);
    }
    printf("\n");
}

int main()
{
    double x = 0.7;
    printExponent(x);

    return 0;
}
