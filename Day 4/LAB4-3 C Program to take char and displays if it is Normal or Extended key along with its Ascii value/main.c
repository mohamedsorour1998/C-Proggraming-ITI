#include <stdio.h>
#include <stdlib.h>

int main()
{
//C Program to take char and displays if it is "Normal or Extended key" along with its Ascii value.
char input =0;

printf("Please Enter The Key To be checked: ");
input = getch();

if (input == -32 ){
         input=getch();
printf("\n %c Is An Extended Key With ASCII OF: %d : ", input, input);
}
else {
printf("\n %c Is A Normal Key With ASCII OF: %d ", input, input);

}

    return 0;
}
