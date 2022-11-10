#include <stdio.h>
#include <stdlib.h>

int main()
{
    int one;
    int two;
    printf("Please Enter First Number \n");
    scanf("%d", &one);
    printf("Please Enter Second Number\n");
    scanf("%d", &two);
    int Quotient = one / two;
    printf("The Quotient is: %d", Quotient);
    int Remainder = one % two;
    printf("The Quotient is: %d", Remainder);



    return 0;
}
