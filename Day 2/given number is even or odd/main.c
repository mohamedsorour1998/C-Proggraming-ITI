#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x = 0;
printf("Please Enter You Number To Be Checked By me: ");
scanf("%d", &x);

if (x%2 == 0) {
    printf("Your Number Is Even!");
}
else if (x%2 != 0) {
    printf("Your Number Is Odd!");
}

    return 0;
}
