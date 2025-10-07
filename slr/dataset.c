#include "dataset.h"
#include <stdio.h>

// implementation

void display_X(int* x_values, register int length)
{
    for (int i=0; i < length; i++)
        printf("values[%d]=%d\n",i,*x_values++);
}

void display_Y(int* y_values, register int length)
{
    for (int i=0; i < length; i++)
        printf("values[%d]=%d\n",i,*y_values++);
}
