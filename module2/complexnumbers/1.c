#include <stdio.h>
#include <stdlib.h>
struct complex
{
    int real;
    int imag;
} *s[2];

void main()
{
    int i;

    for (i = 0; i < 2; i++)
    {
        s[i] = (struct complex *)malloc(sizeof(struct complex));

        printf("enter the real part of %d element\n", i + 1);
        scanf("%d", &s[i]->real);
        printf("enter the img part of %d element\n", i + 1);
        scanf("%d", &s[i]->imag);
    }

    for (i = 0; i < 2; i++)
    {
        printf("enter the real part of %di element is\n", i + 1);
        printf("%d", s[i]->real);
        printf("enter the img part of %di element\n", i + 1);
        printf("%d", s[i]->imag);
    }
}
