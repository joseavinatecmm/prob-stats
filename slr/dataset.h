#ifndef DATASET_H
#define DATASET_H
#include <stdlib.h>

#define SIZE 5
#define LENGTH(array)  sizeof(array)/sizeof(array[0])

typedef struct 
{
    int x_values[SIZE];
    int y_values[SIZE];
} data_set;

// Signatures for displaying the data set
void display_X(int* x_values, register int length);
void display_Y(int* y_values, register int length);
#endif
