/*2. Write a program to swap any type of data passed to an function.

Topics to be covered
- Pointers
- Type Casting
*/

#include <stdio.h>
int main()
{
    int operand1 = 2, operand2 = 6, temp;
    int *ptr1, *ptr2;
    ptr1 = &operand1;
    ptr2 = &operand2;

    printf("\nbefore swapping\n");
    printf("%d\n", *ptr1);
    printf("%d\n", *ptr2);

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("\nafter swapping\n");
    printf("%d\n", *ptr1);
    printf("%d\n", *ptr2);
}