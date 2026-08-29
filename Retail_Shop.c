/*
Author: Alex C. Christie
Date: 08/29/2026
Description: Do

A small retail shop records daily sales amounts. Since sales are entered as they happen,
the manager wants the list to always remain sorted. Write a C program that stores sales
amounts for 7 days. Sorts them in ascending order using Insertion Sort. Displays the
sorted sales amounts. Calculates the median sales value.

*/

#include <stdio.h>
#include <stdlib.h>

void fill(float retail[], int size);
void sort(float retail[], int size);
void display(float retail[], int size);
void median(float retail[], int size);

int main()
{
    float retail[7];

    fill(retail, 7);
    sort(retail, 7);
    display(retail, 7);
    median(retail, 7);

    printf("\n");
    system("pause");

    return 0;
}

void fill(float retail[], int size)
{
    for(int count = 0; count < size; count++)
    {
        printf("Day %d Sale amount: ", count + 1);
        scanf("%f", &retail[count]);
    }
}

void sort(float retail[], int size)
{
    int i = 0;
    float key = 0.0;

    for(int count = 1; count < size; count++)
    {
        key = retail[count]; // card we just picked
        i = count - 1;       // the index immediately to our left

        // while we haven't reached the start AND the left element is larger than our key
        while(i >= 0 && retail[i] > key)
        {
            retail[i + 1] = retail[i]; // shift the larger element to the right 
            i = i - 1;                 // move our comparison pointer one spot left 
        }

        // once the loop stops, we found the right spot. drop the key in!
        retail[i + 1] = key;
    }
}

void display(float retail[], int size)
{
    printf("\n---Weekly Sales in Ascending Order---\n");

    for(int count = 0; count < size; count++)
    {
        printf("$%.2f\n", retail[count]);
    }
}

void median(float retail[], int size)
{
    int mid_index = size / 2;

    printf("\n---Median Value---\n");
    printf("$%.2f\n", retail[mid_index]);
}