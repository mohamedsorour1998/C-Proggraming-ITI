#include <stdio.h>
#include <stdlib.h>

typedef struct employee
{
    int id;
    int salary;
    int bonus;
    int deduction;
    char name[50];
}
employee;

void AddEmployee_by_Add (employee * ptr);
void DisplayEmployee__by_Add(employee * x);

int main()
{
//3- Employee with Functions (try to divide Ass#2 into 2 functions):
    //struct Employee AddNewEmployee();
    //void DisplayEmployee(struct Employee);

    employee Emp_Struct[2];

//take value
    int i=0;
    for (i=0; i<2; i++ )
    {
        AddEmployee_by_Add (&Emp_Struct[i]);

    }

    int j=0;
    for (j=0; j<2; j++ )
    {
        DisplayEmployee__by_Add(&Emp_Struct[j]);
    }


    return 0;
}

void AddEmployee_by_Add (employee * ptr)
{
    printf("Please Enter The  Employee ID: ");
    scanf("%d", &ptr->id);//address->

    printf("Please Enter The  Employee Name : ");
    scanf("%s", ptr->name);

    printf("Please Enter The Employee Salary : ");
    scanf("%d", &ptr->salary);

    printf("Please Enter The  Employee Bonus : ");
    scanf("%d", &ptr->bonus);

    printf("Please Enter The  Employee Deduction : ");
    scanf("%d", &ptr->deduction);

}



void DisplayEmployee__by_Add(employee * x)
{
    printf("The Employee ID : %d \n", x->id );
    printf("The Employee Name : %s\n", x->name);
    printf("The Employee Net Salary : %d\n",(x->salary+x->bonus)-x->deduction );
}


