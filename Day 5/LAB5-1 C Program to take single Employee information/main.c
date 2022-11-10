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
//1- C Program to take single Employee's information(ID, Name, Salary, Bonus, Deduction)\
,and display his code, name along with his net salary. (Emp_Struct).
employee Emp_Struct;
printf("Please Enter The Employee ID : ");
scanf("%d", &Emp_Struct.id);

printf("Please Enter The Employee Name : ");
scanf("%s", Emp_Struct.name);

printf("Please Enter The Employee Salary : ");
scanf("%d", &Emp_Struct.salary);

printf("Please Enter The Employee Bonus : ");
scanf("%d", &Emp_Struct.bonus);

printf("Please Enter The Employee Deduction : ");
scanf("%d", &Emp_Struct.deduction);



printf("The Employee ID : %d \n",Emp_Struct.id );
printf("The Employee Name : %s\n", Emp_Struct.name);
printf("The Employee Net Salary : %d\n",(Emp_Struct.salary+Emp_Struct.bonus)-Emp_Struct.deduction );





 return 0;
}
