/*
Author: Alex C. Christie
Date: 08/29/2026
Description: Do

A small community library stores book IDs in random order. The librarian wants them
sorted numerically before printing labels. Write a C program that accepts 10 book ID
numbers. Sorts them in ascending order using Bubble Sort. Displays the sorted list.
Counts and displays the number of swaps performed.

*/

#include <stdio.h>
#include <stdlib.h>


void library(int id[], int size);
void sort(int id[], int size);
void display(int id[], int size);

int main()
{
    int id[10];

    library(id, 10);
    sort(id, 10);
    display(id, 10);


    system("pause");
    return 0;
}

void library(int id[], int size)
{
    for(int count = 0; count < size; count++)
    {
        printf("ID %d: ", count + 1);
        scanf("%d", &id[count]);
    }
}

void sort(int id[], int size)
{
    int swap_count = 0, temp = 0;

    for(int count = 0; count < size; count++)
    {
        for(int i = 0; i <= size - count - 2; i++)
        {
            if(id[i] > id[i + 1])
            {
                temp = id[i];
                id[i] = id[i + 1];
                id[i + 1] = temp;
                
                swap_count++;
            }
        }
    }

    printf("\nTotal Number of Swaps Performed: %d\n", swap_count);
}

void display(int id[], int size)
{
    printf("\n---Student IDs In Ascending Order---\n");

    for(int i = 0; i < size; i++)
    {
        printf("ID %d: \t%d\n", i + 1, id[i]);
    }
}