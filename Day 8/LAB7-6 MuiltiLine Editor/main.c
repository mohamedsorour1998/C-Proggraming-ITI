#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include <time.h>
#include "mylibrary.h"
#define maxs 75
#define maxY 20

int main()
{
    char s[maxY][maxs] = {{' '}};
    int current = 0;
    int currentY = 0;
    int max = 0;
    char l;
    getch();
    do
    {
        textattr(1);
        char l = getch();
        if(l == -32)
        {
            char z = getch();
            if(z == 71)
            {
                current=0;
                gotoxy(0, currentY);
            }
            else if(z == 79)
            {
                current =max;
                gotoxy(max,currentY);
            }
            else if(z == 77)
            {
                if(current < maxs)
                {
                    current++;
                    gotoxy(current, currentY);
                }else if(currentY < maxY){
                    currentY++;
                    gotoxy(0, currentY);
                }
            }
            else if (z == 72)   //upper
            {
                currentY--;
                gotoxy(current, currentY);
            }
            else if (z == 80)  //down
            {
                currentY++;
                current = 0;
                gotoxy(current, currentY);
            }
            else if(z == 75)
            {
                if(current > 0){
                    current--;
                    gotoxy(current, currentY);
                }else if(currentY > 0){
                    currentY--;
                    current =0;
                    gotoxy(current, currentY);
                }
            }
            else if(z == 83)
            {
                if(current > -1)
                {
                    system("cls");
                    textattr(10);
                    int oto = 0;
                    for(int ko = 0; ko < maxs-1 ; ko++)
                    {
                        if(ko > current)
                        {
                            s[currentY][current+oto] = s[currentY][current+oto+1];
                            oto++;
                        }
                    }
                    int cooo = 0,sooo=0;
                    printf("\n");
                    gotoxy(0,0);
                    for(sooo=0; sooo<maxY; sooo++)
                    {
                        for(cooo = 0; cooo < maxs ; cooo++)
                        {
                            printf("%c",s[sooo][cooo]);
                        }
                        printf("\n");
                    }
                    max--;
                    gotoxy(current,currentY);
                }
            }
        }
        else
        {

            if(
                ((l >= 45 && l <= 130) )
                && current < 25
            )
            {
                printf("%c", l);
                s[currentY][current] = l;
                current++;
            }
            else if(l == 32) //disabled space function
            {
                s[currentY][current] = ' ';
                putch(' \b ');
                current++;
                gotoxy(current, currentY);
            }
            else if(l == 8)
            {
                if(current > 0)
                {/**/
                    system("cls");
                    textattr(10);
                    int oto = 0;
                    for(int ko = current; ko < maxs-1 ; ko++)
                    {
                        if(ko > current)
                        {
                            s[currentY][ko] = s[currentY][ko+1];
                        }
                    }
                    int cooo = 0,sooo=0;
                    printf("%s\n",s);
                    gotoxy(0,0);
                    for(sooo=0; sooo<maxs/5; sooo++)
                    {
                        for(cooo = 0; cooo < maxs ; cooo++)
                        {
                            printf("%c",s[sooo][cooo]);
                        }
                        printf("\n");
                    }
                    max--;
                    if(current > 0)
                    {
                        current--;
                    }
                    gotoxy(current,currentY);
                    /**//*
                    system("cls");textattr(10);
                    int oto = 0;
                    for(int ko = 0; ko < maxs-1 ; ko++)
                    {
                        if(ko<current)
                        {
                            gotoxy(ko,0);
                            printf("%c", s[currentY][ko]);
                        }
                        else if(ko > current)
                        {
                            s[currentY][current+oto] = s[currentY][current+oto+1];
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
                    */
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
                gotoxy(current,currentY);
            }
        }
        if(max < current)
        {
            max = current;
        }
        fflush(stdin);
    }
    while (l != 13);
    int coo = 0,soo=0;
    printf("\n--------------------------------your text-----------------------------------------\n");
    for(soo=0; soo<maxs/5; soo++)
    {
        // coo = 0
        for(coo = 0; coo < maxs ; coo++)
        {
            printf("%c",s[soo][coo]);
        }
        printf("\n");
    }

    //printf("\033[0m");
    return 0;
}

#include "mylibrary.h"
//function definition //#include<windows.h>
void gotoxy(int x, int y)
{
    COORD coordinate;
    coordinate.X = x;
    coordinate.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
}
int len(char arr[])
{
    int count = 0;
    for(int i = 0 ; arr[i] != '\0' ; i++){
            count++;
    }
    return count;
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

