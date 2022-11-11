#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include <time.h>
#include "mylibrary.h"
#define maxs 25

int main()
{
    char s[maxs] ;
    int current = 0;
    int max = 0;
    char l;

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
                printf("%c", l);
                s[current] = l;
                current++;
            }
            else if(l == 32) // space
            {
                system("cls");
                textattr(10);
                int koko=0;
                for(int ko = 0, ok = maxs-1; ko <= maxs-1 || s[ko] == '\n'; ko++,ok--)
                {

                    if (ko > current)
                    {
                        s[maxs-1-koko] = s[maxs-2-koko];
                        koko++;
                    }
                }
                s[current] = ' ';
                for(int so = 0; so < maxs ; so++)
                {
                    printf("%c",s[so]);
                }
                max++;
                current++;
                gotoxy(current, 0);
            }
            else if(l == 8) //backspace
            {
                if(current > -1)
                {

                    system("cls");
                    textattr(10);
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
                    if(current > 0)
                    {
                        current--;
                    }
                    gotoxy(current,0);

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
    return 0;
}
