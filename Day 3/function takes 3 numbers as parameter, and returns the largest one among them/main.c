#include <stdio.h>
#include <stdlib.h>
int x1 = 0;
int x2 = 0;
int x3 = 0;
// prototype
int thelargest (x1, x2, x3);
int main()
{
        printf("Please Enter The First number: ");
    scanf("%d", &x1);
        printf("Please Enter The second number: ");
    scanf("%d", &x2);
        printf("Please Enter The third number: ");
    scanf("%d", &x3);
    printf("THIS IS the largest : %d", thelargest(x1, x2, x3));

    return 0;
}
int thelargest (x1, x2, x3) {

    if (x1 > x2  && x1>x3) {
    printf("Your 1st number is bigger");
                    return x1;

}
else if (x2 > x1  && x2> x3) {
    printf("Your 2nd number is bigger");
                    return x2;

}
else if (x3 > x2  && x3>x1) {
    printf("Your 3rd number is bigger");
                    return x3;

}
    }

