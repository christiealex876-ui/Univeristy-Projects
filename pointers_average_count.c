/*
Author: Alex C. Christie
Date: 09/02/2026
Description: Do

A lecturer has the grades of 10 students stored in an array. Write a program that:

i. Stores the grades in an array.
ii. Uses functions to:

o Calculate the average grade.
o Find the highest grade.
o Count how many students passed (pass mark = 50).

iii. Use pointers to pass the array to the functions.
*/

#include <stdio.h>
#include <stdlib.h>

void store(float *grades, int size); 
void average(float *grades, int size);
void highest(float *grades, int size);
void pass(float *grades, int size);

int main()
{
    float grades[3];

    store(grades, 3);
    average(grades, 3);
    highest(grades, 3);
    pass(grades, 3);

    printf("\n");
    system("pause");
    return 0;
}

void store(float *grades, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("Enter grade %d: ", i + 1);
        scanf("%f", grades + i);
    }
}

void average(float *grades, int size)
{
    float sum = 0.0, avr = 0.0;

    for(int i = 0; i < size; i++)
    {
        sum += *(grades + i);
    }

    avr = sum / size;

    printf("\nAverage: \t%.2f\n", avr);
}

void highest(float *grades, int size)
{
    float max = 0.0;

    for(int i = 0; i < size; i++)
    {
        if(*(grades + i) > max)
        {
            max = *(grades + i);
        }
    }

    printf("Highest: \t%.2f\n", max);
}

void pass(float *grades, int size)
{
    int count = 0;

    for(int i = 0; i < size; i++)
    {
        if(*(grades + i) >= 50)
        {
            count++;
        }
    }

    printf("Passed: \t%d\n", count);
}