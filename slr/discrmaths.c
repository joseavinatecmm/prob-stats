#include "discrmaths.h"

// Functions for summation

short int sumX (int* values, register int length)
{
    short int totalX = 0;

    for (int i =0; i < length; i++) 
        totalX = totalX + values[i];

    return totalX;
}

short int sumY (int* values, register int length)
{
    short int totalY = 0;

    for (int i =0; i < length; i++) 
        totalY = totalY + values[i];

    return totalY;
}

short int sumXY (int* x_values, int* y_values, register int length)
{
    short int totalXY = 0;

    for (int i =0; i < length; i++) 
        totalXY = totalXY + (x_values[i] * y_values[i]);

    return totalXY;
}


