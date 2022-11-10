#include <stdio.h>
#include <stdlib.h>

int main()
{
// 6) C Program to Copy String Without Using strcpy()

char in [50];
char out [50];

printf("Please Enter The String: ");
gets(in);
int i=0;
while (in[i] != '\0'){
        out[i] = in [i];
        i++;
}
    printf("You have Entered The String: %s and The Output Copied String is: %s", in,out);



    return 0;
}
