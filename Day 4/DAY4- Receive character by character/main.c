#include <stdio.h>
#include <stdlib.h>

int main()
{
// Receive character by character and then place the string terminator upon pressing enter, then display the string.

int i = 0;
char input [6] = {0};
char ch= 0;

    while (ch != 10 && i != 6){
        printf("Please Enter the character: %c \n", ch);
        ch = getch();
        input[i] = ch;
        i++;
}

input[i]= '\0';
printf(" \n the string is %s \n", input);


    return 0;
}
