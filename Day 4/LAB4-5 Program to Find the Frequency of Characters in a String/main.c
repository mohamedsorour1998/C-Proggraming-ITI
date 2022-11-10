#include <stdio.h>
#include <stdlib.h>

int main()
{
// 5) C Program to Find the Frequency of Characters in a String
char input [100];
int counter =0;
int x=0;
int i=0;
printf("Please Enter Your Sentence: ");
gets(input);

for ( x = 65; x <=90; x++){
    for ( i = 0 ; i<100 || input[i] != '\0'; i++){
        if (input[i] >97 && input[i] <122) {
                input[i] -= 32;
        }
        if (x == input[i]) {
            counter ++;
        }
            if (input[i] == '\0') break;

    }

        printf("%c : %d\n", x, counter);
        counter =0;
}
    return 0;
}
