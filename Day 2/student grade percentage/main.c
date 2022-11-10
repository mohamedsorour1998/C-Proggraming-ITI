#include <stdio.h>
#include <stdlib.h>

int main()
{
int x = 0;
printf("This Program is Coded by soRouR! \n Please Enter Your Grade: ");
scanf("%d", &x);
if (x >= 85 && x <100) {
printf("Your Grade is Excellent!");
}
else if (x >= 75 && x <85) {
printf("Your Grade is Very good!");
}
else if (x >=60 && x <75) {
printf("Your Grade is Good!");
}
else if (x >=50 && x <60) {
printf("At Least it is not a F, Your Grade is Pass!");
}
else if (x < 50 && x>= 0) {
printf("Your Grade is Fail! Idiot!");
}

else {
  printf("Please Enter a vaide Grade!!");
}

return 0;
}
