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
void above_100(int hospital[10][7]);
void highest(int hospital[10][7]);

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

    average(hospital);
    above_100(hospital);
    highest(hospital);

    return 0;
}

void average(int hospital[10][7])
{

    printf("\n--- Patient Averages ---\n");

    for(int patient = 0; patient < 10; patient++)
    {
        float sum = 0;

        for(int days = 0; days < 7; days++)
        {
            sum += hospital[patient][days];
        }

        printf("Patient %d: %.2f bpm\n", patient + 1, sum / 7.0);
    }

}


void above_100(int hospital[10][7])
{
    int over = 0;

    printf("\n---Patients With Readings Above 100 bpm---\n");

    for(int patient = 0; patient < 10; patient++)
    {
        over = 0;

        for(int days = 0; days < 7; days++)
        {
            if(hospital[patient][days] > 100)
            {
                over = 1;
            }
        }

        if(over == 1)
        {
            printf("Patient %d has a heartbeat over 100\n", patient + 1);
        }
    }
}

void highest(int hospital[10][7])
{
    int high = 59, highest_patient = 0, highest_day = 0;

    for(int patient = 0; patient < 10; patient++)
    {
        for(int days = 0; days < 7; days++)
        {
            if(hospital[patient][days] > high)
            {
                high = hospital[patient][days];
                highest_day = days;
                highest_patient = patient;
            }

        }
    }

    printf("\n---Highest Heart BPM---\n");
    printf("Highest heart bpm: \t%d\n", high);
    printf("Highest Patient \t%d\n", highest_patient + 1);
    printf("Highest Day: \t\t%d\n", highest_day + 1);
}