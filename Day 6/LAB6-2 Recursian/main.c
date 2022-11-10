#include <stdio.h>
#include <stdlib.h>
int sum(int);
int main()
{
    int x = 5;

    printf("%d",sum(x));

    return 0;
}
int sum(int x){
    if (x > 0){
            return x + sum(x - 1);

        }else{
            return 0;
        }
}
