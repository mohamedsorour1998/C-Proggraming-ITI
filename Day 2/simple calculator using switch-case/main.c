#include <stdio.h>
#include <stdlib.h>

int main()
{
int x1 = 0;
int x2 = 0;
char opp;
opp = getchar();

printf("This program is coded by soRouR! \nPlease Enter You 1st number : ");
scanf("%d", &x1);

printf("Please Enter You 2nd Number: ");
scanf("%d", &x2);

printf("Please enter the sign which crossponds to the operation you want to be done: +, -,* ,/: ");
opp = getchar();
scanf("%c", &opp);

switch (opp)
{
    case '+' :

    printf("The Result is: %d" , x1 + x2);
 break;
        case '-' :

    printf("The Result is: %d" , x1 - x2);
 break;
        case '*' :

    printf("The Result is: %d" , x1 * x2);
 break;
        case '/' :

    printf("The Result is: %d" , x1 / x2);
     break;

    default :

    printf("Error");
     break;
}
    return 0;
}
