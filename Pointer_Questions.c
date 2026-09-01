/*
Author: Alex C. Christie
Date: 08/30/2026
Description: Do

a) A company stores 8 employee ID numbers. Write a program that:

i. Counts how many IDs are even.
ii. Uses a function with a pointer parameter.

*/ 

#include <stdio.h>

void fill(int *emps, int size);
void emp_id(int *emps, int size);

int main()
{
    int emps[8];

    fill(emps, 8);
    emp_id(emps, 8);

    return 0;
}

void fill(int *emps, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d Enter Employee ID: \n", i + 1);
        scanf("%d", emps + i);
    }
}


void emp_id(int *emps, int size)
{
    int even = 0;

    printf("\n");

    for(int i = 0; i < size; i++)
    {
        if(*(emps + i) % 2 == 0)
        {
            even++;
        }
    }

    printf("Even IDs: %d\n", even);
}