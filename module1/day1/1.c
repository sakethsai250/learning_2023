/*1. Write a function to find biggest of 2 numbers using
    - if else
    - ternary operator
    */

#include <stdio.h>
int main()
{
    int num1, num2;
    printf("enter numbers");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2)
    {
        printf("num1 is grater");
    }
    else
    {
        printf("num2 is grater");
    }
    return 0;
}