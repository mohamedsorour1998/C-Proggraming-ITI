#include <stdio.h>
#include <stdlib.h>
int str_len(char a[50]);

int main()
{

char name [50];
printf("Please Enter The Name: ");
gets(name);
printf("length of %s is : %d charachters" , name, str_len(name));

    return 0;
}

int str_len(char a[50]){
int i= 0;
while (a[i] != '\0'){
    i++;
    }
return i;
 }
