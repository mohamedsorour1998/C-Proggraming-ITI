#include <stdio.h>
#include <stdlib.h>

struct Employee
{
    int ID;
    char Name[20];
    float Salary;
};

typedef struct Employee Employee;

void Test(int *a)
{

}

void MyFunc(int *p)
{

}

int main()
{
    /*
    Employee *emps[100];

    emps[0] = (Employee *) malloc(sizeof(Employee));

    (*emps[0]).ID = 10;
    emps[0]->ID = 10;

    Employee s;
    Employee *e = &s;
    */

    /*
    int x  = 3;
    int arr[3];

    Test(&x);
    MyFunc(arr);
    */

    int *arr[3];
    int index, cols;
    scanf("%d", &cols);

    for(index = 0; index < 3; index++)
    {
        arr[index] = (int *)malloc(cols * sizeof(int));
    }

    arr[1][2] = 10;
    *(arr[1] + 2) = 10;

    return 0;
}
