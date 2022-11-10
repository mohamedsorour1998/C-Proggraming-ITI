#include <stdio.h>
#include <stdlib.h>

int main()
{
// 8) C Program to Remove all Characters in a String Except Alphabet

    char input [80];
    char clean [80];

    printf("Enter The String to be Cleaned! : ");
    gets(input);
    int i=0;
    while ((input[i] > 65 && input [i] <90) || (input[i] > 97 && input [i] <122) )
    {
        clean [i] =input[i];
        i++;
    }

    printf("The Clean String is %s ", clean);


    return 0;
}
