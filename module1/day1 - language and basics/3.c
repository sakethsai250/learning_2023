/*3. Write a program to read the
    - Roll No
    - Name (Note, you should read full name of the student including initials)
    - Marks of Physics, Math and Chemistry
    Calculate the total, percentage and print the summary.
    */

#include <stdio.h>

int main()
{
    int rollNo;
    char name[50];
    float physics, math, chemistry;
    float total, percentage;

    // Read roll number
    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    // Read name
    printf("Enter Name: ");
    scanf(" %s", name);

    // Read marks of Physics, Math, and Chemistry
    printf("Enter Marks of Physics: ");
    scanf("%f", &physics);

    printf("Enter Marks of Math: ");
    scanf("%f", &math);

    printf("Enter Marks of Chemistry: ");
    scanf("%f", &chemistry);

    // Calculate total and percentage
    total = physics + math + chemistry;
    percentage = (total / 300) * 100;

    // Print summary
    printf("\n--- Student Summary ---\n");
    printf("Roll Number: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("Physics: %f\n", physics);
    printf("Math: %f\n", math);
    printf("Chemistry: %f\n", chemistry);
    printf("Total Marks: %f\n", total);
}