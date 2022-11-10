#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;
    printf("Please enter the first number\n");
    scanf("%d",&x);
    printf("Please enter the second number\n");
    scanf("%d",&y);
    int total = x + y;
    printf(" The Result is\n");
    printf("%d", total);

    return 0;
}
