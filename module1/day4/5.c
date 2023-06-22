/*
Write a program to demonstrate the swapping the fields of two structures using pointers
*/

#include <stdio.h>
#include <stdlib.h>

struct Person
{
    char name[50];
    int age;
};

void swapFields(struct Person *person1, struct Person *person2)
{
    // Swap the name field
    char temp[50];
    strcpy(temp, person1->name);
    strcpy(person1->name, person2->name);
    strcpy(person2->name, temp);

    // Swap the age field
    int tempAge = person1->age;
    person1->age = person2->age;
    person2->age = tempAge;
}

int main()
{
    struct Person person1, person2;

    strcpy(person1.name, "John");
    person1.age = 25;

    strcpy(person2.name, "Alice");
    person2.age = 30;

    printf("Before swapping:\n");
    printf("Person 1: Name = %s, Age = %d\n", person1.name, person1.age);
    printf("Person 2: Name = %s, Age = %d\n", person2.name, person2.age);

    swapFields(&person1, &person2);

    printf("\nAfter swapping:\n");
    printf("Person 1: Name = %s, Age = %d\n", person1.name, person1.age);
    printf("Person 2: Name = %s, Age = %d\n", person2.name, person2.age);

    return 0;
}