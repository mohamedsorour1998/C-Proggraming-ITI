#include <stdio.h>
#include <stdlib.h>
typedef struct employee {
    int id;
    int salary;
    int bonus;
    int deduction;
    char name[50];
}
employee;
int main()
{
//2- C Program to take information of Array of 5 Employees, then display their data. (EmpArr_of_Struct)

employee Emp_Struct[5];

//take value
int i=0;
for (i=0; i<5; i++ ) {
 printf("Please Enter The %d Employee ID : ", i);
scanf("%d", &Emp_Struct[i].id);

printf("Please Enter The %d Employee Name : ", i);
scanf("%s", Emp_Struct[i].name);

printf("Please Enter The %d Employee Salary : ", i);
scanf("%d", &Emp_Struct[i].salary);

printf("Please Enter The %d Employee Bonus : ", i);
scanf("%d", &Emp_Struct[i].bonus);

printf("Please Enter The %d Employee Deduction : ", i);
scanf("%d", &Emp_Struct[i].deduction);
}




int j=0;
for (j=0; j<5; j++ ) {
printf("The Employee ID : %d \n",Emp_Struct[j].id );
printf("The Employee Name : %s\n", Emp_Struct[j].name);
printf("The Employee Net Salary : %d\n",(Emp_Struct[j].salary+Emp_Struct[j].bonus)-Emp_Struct[j].deduction );
}





 return 0;
}
