#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int greater(char pchoose, char cchoose)
{
    if (pchoose == cchoose)
    {
        return 1;
    }
    if (pchoose == 'R' && cchoose == 'P')
    {
        return 2;
    }
    else if (pchoose == 'P' && cchoose == 'R')
    {
        return 3;
    }
    else if (pchoose == 'S' && cchoose == 'P')
    {
        return 3;
    }
    else if (pchoose == 'P' && cchoose == 'S')
    {
        return 2;
    }
    else if (pchoose == 'R' && cchoose == 'S')
    {
        return 3;
    }
    else if (pchoose == 'S' && cchoose == 'R')
    {
        return 2;
    }
}
void main()
{
    srand(time(NULL));
    char play[] = {'R', 'P', 'S'}, pchoose, cchoose, name[20];
    int temp, pscore = 0, cscore = 0, a;
    printf("WELCOME TO AMIT'S RPS GAME......... \n ");
    printf("POWERED BY 'VS CODE MICROSOFT'........\n");
    printf("----Enter Your Name : ");
    gets(name);
    strupr(name);
    printf("---%s Lets Start The Game---\n", name);
    for (int i = 1; i <= 3; i++)
    {
        printf("\n\n%d round Player Turn----\n", i);
        printf("Choose The Following:\n 1 for Rock...\n 2 for Paper...\n 3 for scissor...\n");
        scanf("%d", &temp);
        getchar();
        if (temp <= 3)
        {
            pchoose = play[temp - 1];
            printf("You Choosed %c \n", pchoose);
            printf("\n\n%d round Computer Turn----\n", i);
            printf("Choose The Following:\n 1 for Rock...\n 2 for Paper...\n 3 for scissor...\n");
            temp = (rand() % 3) + 1;
            cchoose = play[temp - 1];
            printf("Computer Choosed %c \n", cchoose);
            a = greater(pchoose, cchoose);
            if (a == 1)
            {
                cscore += 1;
                pscore += 1;
            }
            else if (a == 2)
            {
                cscore += 1;
            }
            else if (a == 3)
            {
                pscore += 1;
            }
            printf("Player Score : %d\n", pscore);
            printf("Computer Score : %d\n", cscore);
            printf("\n");
        }
        else
        {
            printf("You Choose Invalid Option");
            break;
        }
    }
    if (temp <= 3)
    {

        if (pscore < cscore)
        {
            printf("\n-----OHH! NO YOU LOSE THE GAME-----");
        }
        else if (pscore > cscore)
        {
            printf("\n-----HUREEEEE YOU WON THE MATCH-----");
        }
        else
        {
            printf("\n-----MATCH IS DRAW-----");
        }
        printf("\n\nTotal Score is:\n Player = %d\n Computer = %d", pscore, cscore);
        printf("\n----Thanks For Playing-----");
    }
    else
    {
        printf("\n----Thanks For Playing-----");
    }
}