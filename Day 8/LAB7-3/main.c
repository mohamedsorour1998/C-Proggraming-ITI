#include <stdio.h>
#include <stdlib.h>

int main()
{
   int ** ptr;
   int student, subject, i =0, j=0, sum =0;
   // Get Values
   printf("How Many Student? : ");
   scanf("%d",&student);
   printf("How Many Subjects? : ");
   scanf("%d",&subject);

   // Allocation
   ptr = (int **)malloc(student * sizeof(int *));
   for (i=0;i<subject;i++)
   {
   ptr[i]= (int *)malloc(subject * sizeof(int));
   }

   // Passing Values
   for (i=0;i<student;i++)
   {
       for (j=0;j<subject;j++)
       {
           printf("The Degree of subject%d of student%d : ", i+1 , j+1);
           scanf("%d", &ptr[i][j]);
           sum+= ptr[i][j];
       }
       int average = sum / subject;

   // Printing Values
       printf("Sum of Student%d: %d\n", student, sum);
       printf("The Average of Student%d degree : %d\n", i, average);
   }

    return 0;
}
