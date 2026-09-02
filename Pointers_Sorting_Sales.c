/*
Author: Alex C. Christie
Date: 09/02/2026
Description: Do

A store tracks 8 daily sales values. Write a function to return the second largest
value. (Can use a sorting algorithm).

*/

#include <stdio.h>
#include <stdlib.h>

void fill(float *sales, int size);
float sort(float *sales, int size);

int main()
{
    float sales[8];
    float sec_largest = 0.0;

    fill(sales, 8);
    sec_largest = sort(sales, 8);

    printf("Second largest sale = $%.2f\n", sec_largest);

    system("pause");
    return 0;
}

void fill(float *sales, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d Enter Sale Amount: \n", i + 1);
        scanf("%f", sales + i);
    }
}

float sort(float *sales, int size)
{
    float largest = 0.0, sec_largest = 0.0;


    printf("\n");

    for(int i = 0; i < size; i++)
    {
        if(*(sales + i) > largest)
        {
            sec_largest = largest; 

            largest = *(sales + i);
        }
        else if(*(sales + i) > sec_largest && *(sales + i) != largest)
        {
            sec_largest = *(sales + i);

        }

    }

    return sec_largest;
}