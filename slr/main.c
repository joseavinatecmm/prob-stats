#include "dataset.h"
#include "discrmaths.h"
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
 
int main(int argc, char* argv[]) 
{
    
    data_set ds = {
        .x_values = {1,1,1,1,1},
        .y_values = {1,2,3,4,5}
    };
 
    // Set the locale to support UTF-8 characters
    setlocale(LC_ALL, "en_US.UTF-8"); 

    // computing the length of an array 
    register int length = LENGTH(ds.x_values);

    // Displaying data set x values 
    printf("X values = \n");
    display_X(ds.x_values, length);

    // Displaying data set y values 
    printf("Y values = \n");
    display_Y(ds.y_values, length);


    // Performing summations
    // Summation of x values
    printf("\u2211x = %d\n", sumX(ds.x_values, length));
    
    // Summation of y values
    printf("\u2211y = %d\n", sumY(ds.y_values, length));
    
    // Summation of x*y values
    printf("\u2211xy = %d\n", sumXY(ds.x_values, ds.y_values, length));

    // Exit with success
    return EXIT_SUCCESS;
}
