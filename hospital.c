/*
Author: Alex C. Christie
Date: 08/27/2026
Description: Do

A hospital monitors 10 patients over 7 days.

a. Rows → Patients
b. Columns → Days
c. Store daily heart rate readings (random between 60–120 bpm).

Create functions to:
a. Find the average heart rate per patient.
b. Identify patients with any reading above 100.
c. Find the overall highest heart rate recorded.
d. Return both patient number and day of highest reading.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void average(int hospital[10][7]);

int main()
{
    srand(time(0));

    int hospital[10][7];

    for(int patient = 0; patient < 10; patient++)
    {
        for(int days = 0; days < 7; days++)
        {
            hospital[patient][days] = 60 + rand() % (120 - 60 + 1);
        }
    }

    for(int patient = 0; patient < 10; patient++)
    {
        printf("Patient %d: \t", patient + 1);

        for(int days = 0; days < 7; days++)
        {
            printf("%d\t", hospital[patient][days]);
        }

        printf("\n");
    }

    return 0;
}

void average(int hospital[10][7])
{
    for(int count = 0; count < 10; count++)
    {
        float sum = 0;

        for(int count = 0; count < 7; count++)
        {
            sum += hospital[count][count];
        }

        float average = sum / 7.0;
    }
}

void average(int hospital[10][7])
{
    
}