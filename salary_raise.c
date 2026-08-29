/*
Author: Alex C. Christie
Date: 08/29/2026
Description: Do

A company wants to review employee salaries from lowest to highest to determine raise
eligibility. Write a C program that Stores employee salaries. Sorts them in ascending
order using Selection Sort. Displays:

a. The lowest salary
b. The highest salary
c. The sorted salary list

*/

#include <stdio.h>
#include <stdlib.h>

int fill(float salary[], int max_size);
void sort(float salary[], int actual_size);
void display(float salary[], int actual_size);

int main()
{
    float salary[100];
    int actual_size = 0;

    actual_size = fill(salary, 100);
    sort(salary, actual_size);
    display(salary, actual_size);


    system("pause");
    return 0;
}

int fill(float salary[], int max_size)
{
    int i = 0;

    printf("\n---Enter Salary (-1 to Stop)---\n");

    while(i < max_size)
    {
        printf("Employee %d Salary: ", i + 1);
        scanf("%f", &salary[i]);

        if(salary[i] == -1)
        {
            break;
        }

        i++;

    }

    return i;
    
}

void sort(float salary[], int actual_size)
{
    float temp = 0.0; 
    int min_index = 0;

    for(int i = 0; i < actual_size - 1; i++)
    {
        min_index = i;

        for(int j = i + 1; j < actual_size; j++)
        {
            if(salary[j] < salary[min_index])
            {
                min_index = j;
            }
        }

        if(min_index != i)
        {
            temp = salary[i];
            salary[i] = salary[min_index];
            salary[min_index] = temp;
        }
        
    }
}

void display(float salary[], int actual_size)
{
    printf("\n---Salaries In Ascending Order---\n");

    for(int i = 0; i < actual_size; i++)
    {
        printf("Salary %d: \t$%.2f\n", i + 1, salary[i]);
    }
    printf("\n");
    printf("Lowest Salary: \t$%.2f\n", salary[0]);
    printf("Highest Salary: $%.2f\n", salary[actual_size - 1]);
}