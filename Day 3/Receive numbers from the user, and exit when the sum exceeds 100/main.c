#include <stdio.h>
#include <stdlib.h>

int main()
{

int x= 0;

printf("Please Enter The First Number: ");
scanf("%d", &x);
int sum =x;

while (sum <=100) {
    printf("Please Enter The Next Number: ");
    scanf("%d", &x);
      sum = sum + x;

}
printf("You are done");

    return 0;

}

