#include <stdio.h>
#include <stdlib.h>
char cha;


char upper (cha);

int main()
{
    printf("Please Enter the character \n");
    cha = getchar();
    scanf("c", &cha);
    printf("the upper character is : \n" "%c", upper (cha));
    return 0;
}
char upper (cha) {

    cha=cha - 32;
return cha;
}
