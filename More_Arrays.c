/*
Author: Alex C. Christie
Date: 08/28/2026
Description: Do

Create a 2-dimensional array that accepts from the user 4 test grades each for 3 students.
Write code that will
a. Print the 4 test grades for the first student1.
b. Print the second test grades for all the students2.
c. Print all grades for all students.
d. For each student, determine and print the highest grade obtained of the 4 tests.
e. Find the average grade for each student.
f. Find the average grade for each test.

*/

#include <stdio.h>

void teach(int book[3][4]);
void highest(int book[3][4]);
void avr_student(int book[3][4]);
void avr_test(int book[3][4]);

int main()
{
    int book[3][4];

    teach(book);
    highest(book);
    avr_student(book);
    avr_test(book);

    return 0;
}

void teach(int book[3][4])
{
    for(int student = 0; student < 3; student++)
    {
        printf("Student %d:\n", student + 1);

        for(int grade = 0; grade < 4; grade++)
        {
            printf("Enter Grade %d: ", grade + 1);
            scanf("%d", &book[student][grade]);
        }
    }
}

void highest(int book[3][4])
{
    int highest = -1;

    printf("\n---Highest Grade Per Student---\n");

    for(int student = 0; student < 3; student++)
    {
        highest = 0;

        for(int grade = 0; grade < 4; grade++)
        {
            if(book[student][grade] > highest)
            {
                highest = book[student][grade];

            }
        }

        printf("Student %d Highest Grade: \t%d\n", student + 1, highest);
    }
}

void avr_student(int book[3][4])
{
    int avr = 0;
    int sum = 0;

    printf("---Average Grade Per Student---\n");

    for(int student = 0; student < 3; student++)
    {
        sum = 0;

        for(int grade = 0; grade < 4; grade++)
        {
            sum += book[student][grade];
        }

        printf("Student %d Average Grade: \t%.f\n", student + 1, sum / 4.0);
    }
}

void avr_test(int book[3][4])
{
    int avr = 0;
    int sum = 0;

    printf("\n---Average Test Scores---\n");

    for(int grade = 0; grade < 4; grade++)
    {  
        sum = 0;

        for(int student = 0; student < 3; student++)
        {
            sum += book[grade][student];
        }

        printf("Grade %d Average Score: \t%.2f\n", grade + 1, sum / 3.0);
    }
}