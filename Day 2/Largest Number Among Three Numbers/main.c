#include <stdio.h>
#include <stdlib.h>

int main()
{
int x1 = 0;
int x2 = 0;
int x3=0;
printf("Please Enter You 1st number To Be Checked By me: ");
scanf("%d", &x1);
printf("Please Enter You 2nd Number To Be Checked By me: ");
scanf("%d", &x2);
printf("Please Enter You 3rd Number To Be Checked By me: ");
scanf("%d", &x3);

if (x1 > x2  && x1>x3) {
    printf("Your 1st number is bigger");
}
else if (x2 > x1  && x2> x3) {
    printf("Your 2nd number is bigger");
}
else if (x3 > x2  && x3>x1) {
    printf("Your 3rd number is bigger");
}
        return 0;
}
