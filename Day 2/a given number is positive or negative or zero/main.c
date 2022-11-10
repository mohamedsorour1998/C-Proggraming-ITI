#include <stdio.h>
#include <stdlib.h>

int main()
{
int x = 0;
printf("Please Enter You Number To Be Checked By me: ");
scanf("%d", &x);

if (x == 0){
printf("Your Number is Zero");
}
else if (x > 0){
printf("Your Number is Positvie!");
}
else if (x < 0){
printf("Your Number is Negitive!");
}
else {
printf("Please Enter a Correct Number!!!!!");
}

    return 0;
}
