#include <dos.h>
#include <dir.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
struct Employee
{
    int id;
    int salary;
    int bonus;
    int deduction;
    char name[20];
};
typedef struct Employee Employee;
int line =0;
int check = 0;
void case1();
void case2();
void case3();
void addemployee(Employee*);
void displayemployee(Employee);
void gotoxy(int x, int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds);
}
void SetColor(int ForgC){
     WORD wColor;

      HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
      CONSOLE_SCREEN_BUFFER_INFO csbi;

                       //We use csbi for the wAttributes word.
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
                 //Mask out all but the background attribute, and add in the forgournd     color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
 }
int main()
{


    Employee emp;
    Employee *ptr;
    ptr = &emp;
    int size =0;
    int i =0;
    printf("Enter Number of employee: ");
    scanf("%d", &size);
    ptr = (Employee *)malloc(size * sizeof(Employee));
    menu();
    char c;
    do
    {
        c = getch();
        if (c == -32)
        {
            switch (getch())
            {
            case 72:
                if (line == 0)
                {
                    system("cls");
                    case1();
                }
                else if (line == 1)
                {
                    system("cls");
                    case3();
                }
            else if (line == 2)
            {
                system("cls");
                case1();
            }
            else if (line == 3)
            {
                system("cls");
                case2();
            }
                break;
            case 80:
                if (line == 0)
                {
                    system("cls");
                    case3();
                }
                else if (line == 1)
                {
                    system("cls");
                    case2();
                }
                else if (line == 2)
                {
                    system("cls");
                    case3();
                }
                else if (line == 3)
                {
                    system("cls");
                    case1();
                }
            }
        }
        if (c == 13)
        {
            char m;
            switch (line)
            {

            case 1:
                check = 1;
                system("cls");
                for (i=0;i<size;i++)
                {
                   addemployee(ptr + i);
                }

                printf("\n Press p if you want to return : ");
                 m = getch();
                break;
            case 2:
                if (check == 1)
                {
                    system("cls");
                    for (i=0;i<size;i++)
                    {
                       displayemployee(ptr[i]);
                    }

                    printf("\npress p to return to main menu\n");
                    m = getch();
                }
                else if (check != 1)
                {
                    system("cls");
                    printf("Error , you didn't enter any value \n");
                    printf("\n Press p if you want to return : ");
                    m = getch();

                }

                break;
            case 3:
                system("cls");
                printf("You've exit our program\n");
                exit(0);
            }
                if (m == 'p')
                {
                    system("cls");
                    menu();
                }
                else
                {
                    exit(0);
                }
                c = m;
        }
        } while(c != 13);


}
void menu()
{
    system("cls");
    line = 0;
    gotoxy(35, 1);
    printf("Add");
    gotoxy(35, 5);
    printf("Print");
    gotoxy(35, 10);
    printf("Exit");

}
void case1()
{
    line =1;
    SetColor(2);
    gotoxy(35,1);
    printf("Add");
    SetColor(15);
    gotoxy(35, 5);
    printf("print");
    gotoxy(35, 10);
    printf("Exit");
}
void case2()
{
    line =2;
    gotoxy(35,1);
    printf("Add");
    SetColor(2);
    gotoxy(35, 5);
    printf("print");
    SetColor(15);
    gotoxy(35, 10);
    printf("Exit");
}
void case3()
{
    line =3;
    gotoxy(35,1);
    printf("Add");
    gotoxy(35, 5);
    printf("print");
    SetColor(2);
    gotoxy(35, 10);
    printf("Exit");
    SetColor(15);
}
void addemployee(Employee *x)
{
    printf("Enter Id: ");
    scanf("%d", &(*x).id);
    printf("Enter Name: ");
    scanf("%s", (*x).name);
    printf("Enter Salary: ");
    scanf("%d",&(*x).salary);
    printf("Enter Bonus: ");
    scanf("%d", &(*x).bonus);
    printf("Enter deduction: ");
    scanf("%d", &(*x).deduction);
}
void displayemployee(Employee emp)
{
    printf("\nId: %d ", emp.id);
    printf("Name: %s ", emp.name);
    printf("Salary: %d ", emp.salary);
    printf("Net Salary: %d", (emp.salary + emp.bonus) - emp.deduction);
}
