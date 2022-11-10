#include <stdio.h>
#include <stdlib.h>

int main()
{
char input =0;
int countword=0;
int countalpha=0;

    printf("Enter the Sentence");
    input= getchar();
    scanf("%c", & input);


while (input != '\n') {
            input= getchar();
        countalpha++;


    if (input == ' ') {
        countalpha--;
        countword++;
       }
        else if (input == '\n') {
                    countword++;
        }

    }

    printf("Number of Alphabets : %d\n", countalpha-1);
    printf("Number of words: %d", countword);

    return 0;
}
