#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Input and Output from Array using pointers:
    C Program that have an Array of integers, read array data from user, Ptr -> Arr, print that array using Ptr.
    (try to use "Array Notation while reading data" and "Pointer notation while printing data")
    */


    int input [5] = {0};
    int i=0;
    int * ptri = &input;

    for (i=0; ptri[i] < 5; i++)
    {
        printf("Please Enter The Data To Be Readed %d: ", i);
        scanf("%d",&ptri[i]);
        printf("The Data is: %d \n ", ptri[i]);

    }


    /* int j=0;
     for (j=0; j==i; j++)
     {
         output[j] =input[i];

     }

     int * ptro = &output;
     printf("The Data is: %d \n " , *ptro);*/








    return 0;
}
