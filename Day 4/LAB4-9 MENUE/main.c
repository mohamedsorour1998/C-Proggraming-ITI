#include <stdio.h>
#include <stdlib.h>
int line =0;
char items[3][10]= {{"Home"},{"Contact"},{"Exit"}};


int main()
{
//Highlight Menu: New Colored Menu "with Arrows"

    menu();
    do
    {
        char n = getch();

        if (n == -32)
        {
            switch (getch())
            {
            case 72:
                if (line == 0)
                {
                    line =3;
                }
                else if (line == 1)
                {
                    line =3;
                }
                else
                {
                    line --;
                }
                menu();
                break;

            case 80:
                if (line == 0)
                {
                    line =3;
                }
                else if (line == 3)
                {
                    line =1;
                }
                else
                {
                    line ++;
                }
                menu();
                if (n == 13) {

                printf("Hello");

                }
                break;


            case 13:
                if (line != 0)
                {

                    switch (line)
                    {
                    case 1:
                        system("cls");
                        printf("You Are in Home!");
                        break;
                    case 2:
                        system("cls");
                        printf("You Are in Contact!");
                        break;

                    case 3:
                        system("cls");
                        exit(0);
                        break;


                    }

                }

            }



        } else if (n == 13){
             if (line != 0)
                {

                    switch (line)
                    {
                    case 1:
                        system("cls");
                        printf("You Are in Home!");
                        break;
                    case 2:
                        system("cls");
                        printf("You Are in Contact!");
                        break;

                    case 3:
                        system("cls");
                        exit(0);
                        break;
        }

                }
        if(getch() == 8) {
            menu();
        }
        }
    }
    while (1);

    return 0;
}

void menu ()
{


    system("cls");
    printf("You are in line %d", line);

    int i=0;
    for (i=0; i<3; i++)
    {

        if (line == i+1)
        {
            printf("\n\033[0;31m {%s} \033[0m", items[i]);

        }
        else
        {
            printf("\n%s", items[i]);

        }




    }







}
