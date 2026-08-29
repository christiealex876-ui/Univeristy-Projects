/*
Author: Alex C. Christie
Date: 08/28/2026
Description: Do

Write a single C statement that will initialize a two-dimensional array of integers with 4
test grades for each of 3 students. Student 1 has the following grades: 75, 65, 45, 20.
Student 2 has the following grades: 85, 90, 100, 70. Student 3 has the following grades:
40, 30, 35, 60.

*/

#include <stdio.h>

int main()
{   
    int arr[3][4] = {{75, 65, 45, 20}, {85, 90, 100, 70}, {40, 30, 35, 60}};

    for(int student = 0; student < 3; student++)
    {
        printf("Student %d: \t", student + 1);

        for(int grades = 0; grades < 4; grades++)
        {
            printf("%d\t", arr[student][grades]);
        }

        printf("\n");

    }


    return 0;
}
