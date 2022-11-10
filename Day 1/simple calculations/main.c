#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first;
    int second;



    printf("Please Enter first number");
    scanf("%d", &first);
    printf("Please Enter second number");
    scanf("%d", &second);
    int add = first + second;
    int sub = first - second;
    int multiply = first * second;
    int divid = (float)first / second;

    printf("The Result of add is %d and The Result of sub %d is The Result of multiply %d is The Result of divid is %d", add, sub, multiply, divid);


    return 0;
}
