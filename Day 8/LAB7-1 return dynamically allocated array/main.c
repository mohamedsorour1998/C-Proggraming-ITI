#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* 1. int* IncrementArray()
	- try to return fixed Array first, see what happened.

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

    }

	- Function get array and return dynamically allocated array.*/
		int size;
int x[size];

    printf("Please Enter The Size of The Array: ");
    scanf("%d", &size);
	int* IncrementArray=(int *)malloc(size * sizeof(int)); // reserve array of dynamic size


    int i=0;
    for (i=0; i<size; i++){
    printf("Please Enter Element %d of array: ", i+1);
    scanf("%d", &IncrementArray[i]);
    }

    for (i=0; i<size; i++){
    printf("Return Array %d is %d\n" ,i+1, IncrementArray[i]);
    }




    return 0;
}
