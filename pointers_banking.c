/*
Author: Alex C. Christie
Date: 09/02/2026
Description: Do

A bank stores account balances for 5 customers in an array. Write a program that:

i. Uses a function to apply a 5% interest to each account.
ii. Uses a function to find the total money in the bank.
iii. Uses pointers to modify the original array values.

*/

#include <stdio.h>
#include <stdlib.h>

void store(float *balance, int size);
void interest(float *balance, int size);
void total(float *balance, int size);

int main()
{
    float balance[5];

    store(balance, 5);
    interest(balance, 5);
    total(balance, 5);


    printf("\n");
    system("pause");
    return 0;
}

void store(float *balance, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("User %d - Enter Balance: ", i + 1);
        scanf("%f", balance + i);
    }

    printf("\nAccount Balances\n");

    for(int i = 0; i < size; i++)
    {
        printf("User %d - \t$%.2f\n", i + 1, *(balance + i));
    }
}

void interest(float *balance, int size)
{
    float bit = 0.0, new_balance = 0.0;

    for(int i = 0; i < size; i++)
    {
        bit = (*(balance + i) * 0.05);
        new_balance = (*(balance + i) + bit);
        *(balance + i) = new_balance;
    }

    printf("\n---5%% Interest Added---\n");

    for(int i = 0; i < size; i++)
    {
        printf("User %d - \t$%.2f\n", i + 1, *(balance + i));
    }
}

void total(float *balance, int size)
{
    float sum = 0.0;

    for(int i = 0; i < size; i++)
    {
        sum += *(balance + i);
    }

    printf("\n---Total Amount in The Bank---\n");

    printf("Total Sum: \t$%.2f", sum);
}