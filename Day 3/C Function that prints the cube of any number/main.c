#include <stdio.h>
#include <stdlib.h>
int x1=0;
int cu=0;
//prototype
int cube(x1);

int main()
{
    printf("Please Enter The number: ");
    scanf("%d", &x1);

    printf("the cubic is: %d",cube(x1));
    return 0;
}
int cube(x1) {
cu = x1 * x1 * x1;
return cu;
}
