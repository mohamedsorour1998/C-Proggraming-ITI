#include <stdio.h>
#include <stdlib.h>
int x=0;
int i = 0;
int main()
{
    printf("This Program is coded by soRouR!\nPlease Enter The Number: ");
    scanf("%d", &x);
    for (i=1; i<=10; i++) {
        printf("%d * %d = %d\n", x, i, i*x);
    }
    return 0;
}
