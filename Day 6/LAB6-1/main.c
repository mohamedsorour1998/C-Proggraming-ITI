#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Input and Output from Array using pointers:
    C Program that have an Array of integers, read array data from user, Ptr -> Arr, print that array using Ptr.
    (try to use "Array Notation while reading data" and "Pointer notation while printing data")
    */

	int x[3];
    int* IncrementArray= &x;

    int i=0;
    for (i=0; i<3; i++){
    printf("Please Enter Element %d of array: ", i);
    scanf("%d", &IncrementArray[i]);
    }

    for (i=0; i<3; i++){
    printf("Return Array %d is %d\n" ,i, IncrementArray[i]);
    }






    return 0;
}
