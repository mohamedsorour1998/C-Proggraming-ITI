#include <stdio.h>
#include <stdlib.h>
char input;
char alpah (input);

int main()
{
    printf("Please Enter The Character: ") ;
   input = getchar();
   scanf("%c",alpah (input) );
    return 0;
}

char alpah (input){
if (input>=48 && input <=57 ){
    return printf("This is a Number");
}
else{
    return printf("This is a Char");
}
}
