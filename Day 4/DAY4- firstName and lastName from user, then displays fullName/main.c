#include <stdio.h>
#include <stdlib.h>

int main()
{

char fname [20] = {0};
char lname [20] = {0};
char flname [50] = {0};
printf("Please Enter Your First Name : ");
gets(fname);
printf("Please Enter Your Last Name : ");
gets(lname);
int i=0;

}
int j=0;
for (j=0 ;lname[j] != '\0'; j++ ) {

        flname[i+j] =lname[j];
}

printf("Your Full Name Is :%s\n", flname);

    return 0;
}
