#include <stdio.h>
#include <stdlib.h>

void swap(int *, int *);


//C Program to swap 2 integer values. (Swap function, calling by address)
int main()
{
int x1=0;
int x2=0;
printf("Please Enter The first number:");
scanf("%d", &x1);
printf("Please Enter The second number:");
scanf("%d", &x2);
swap(&x1,&x2);
printf("This is The New first number: %d  & This is The New second number: %d",x1, x2);

    return 0;
}


void swap(int * ptrx1, int * ptrx2){
     //* pass value to the address
 int temp = 0;
temp= *ptrx1;
*ptrx1=*ptrx2;
*ptrx2 = temp;
}



