#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include <time.h>
#define maxs 25
#ifndef MYLIBRARY
#define MYLIBRARY
#include<windows.h>
void SetColor(int ForgC);
void textattr(int ForgC);
void clrscr();
void gotoxy(int x, int y);

#endif // MYLIBRARY

int main()
{
    char s[maxs] ;
    int current = 0;
    int max = 0;
    char l;

    //printf("\033[0;7m");
    do
    {
    textattr(10);
        char l = getch();
        if(l == -32)
        {
            char z = getch();
            if(z == 71) //home
            {
                current=0;
                gotoxy(0, 0);
            }
            else if(z == 79) //end
            {
                current =max;
                gotoxy(max,0);
            }
            else if(z == 77) //right
            {
                if(current < maxs)
                {
                    current++;
                    gotoxy(current, 0);
                }
            }
            else if(z == 75) //left
            {
                current--;
                gotoxy(current, 0);
            }
        }
        else
        {

            if(
                ((l >= 45 && l <= 130) )
                && current < 25
            )
            {
                //printf("\033[0;7m");
                printf("%c", l);
                s[current] = l;
                current++;
                // printf("\033[0m");
            }
            else if(l == 32) // space
            {
                system("cls");
                textattr(10);
                int koko=0;
                for(int ko = 0, ok = maxs-1; ko <= maxs-1 || s[ko] == '\n'; ko++,ok--)
                {
                    if(ko<current)
                    {
                        //gotoxy(ko,0);
                        //printf("%c", s[ko]);
                    }
                    else if (ko > current)
                    {
                        s[maxs-1-koko] = s[maxs-2-koko];
                        //gotoxy(ko+1,0);
                        //printf("%c", s[ko]);
                        koko++;
                    }
                }
                s[current] = ' ';
                //printf("\033[0;7m");
                for(int so = 0; so < maxs ; so++)
                {
                    printf("%c",s[so]);
                }
                //printf("\033[0m");
                max++;
                current++;
                gotoxy(current, 0);
            }
            else if(l == 8) //backspace
            {
                if(current > -1)
                {
                    /*
                       current--;
                       gotoxy(current+1, 0);
                       printf(" \b");
                       gotoxy(current+1, 0);
                       max--;*/

                    /*      */
                    system("cls");textattr(10);
                    int oto = 0;
                    for(int ko = 0; ko < maxs-1 ; ko++)
                    {
                        if(ko<current)
                        {
                            gotoxy(ko,0);
                            printf("%c", s[ko]);
                        }
                        else if(ko > current)
                        {
                            s[current+oto] = s[current+oto+1];
                            gotoxy(ko,0);
                            printf("%c", s[ko]);
                            oto++;
                        }
                    }
                    max--;
                    if(current > 0){
                        current--;
                    }
                    gotoxy(current,0);


                    /*
                    putch('\b');
                    putch(' ');
                    putch('\b');
                    count--;*/
                }
            }
            else if(l == 13)
            {
                break;
                l =13;
            }
            else if (l == 32)
            {
                current++;
                gotoxy(current,0);
            }
        }
        if(max < current)
        {
            max = current;
        }
        fflush(stdin);
    }
    while (l != 13);
    int coo = 0;
    printf("\n",s[coo]);
    for(coo = 0; coo < maxs ; coo++)
    {
        printf("%c",s[coo]);
    }
    //printf("\033[0m");
    return 0;
}
//function definition //#include<windows.h>
void gotoxy(int x, int y)
{
    COORD coordinate;
    coordinate.X = x;
    coordinate.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
}

void clrscr()
{
    system("cls");
}

void textattr(int ForgC)
{
    //system("COLOR ForgC"); //system("COLOR FC");
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdOut, ForgC);
}

void SetColor(int ForgC)
{
     WORD wColor;
     //This handle is needed to get the current background attribute

     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;
     //csbi is used for wAttributes word

     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
          //To mask out all but the background attribute, and to add the color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
}

