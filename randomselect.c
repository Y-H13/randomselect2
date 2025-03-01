#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("Please press the green button below.")
    int num, result;
    num=rand();
    result=num%11;
    /*printf("%d",result);*/
    if(result==1)
    {
        printf("Nobody's fault");
    }
    else if(result==2)
    {
        printf("BAN");
    }
    else if (result==3)
    {
        printf("Nagaredama");
    }
    else if(result==4)
    {
        printf("Samidareyo");
    }
    else if(result==5)
    {
        printf("Sakurazuki");
    }
    else if(result==6)
    {
        printf("Start over!");
    }
    else if (result==7)
    {
        printf("Syouninyokkyuu");
    }
    else if (result==8)
    {
        printf("Ikutsunokoroni modoritainoka");
    }
    else if (result==9)
    {
        printf("Jigoujitoku");
    }
    else if(result==10)
    {
        printf("I want tomorrow to come");
    }
    else
    {
        printf("UDAGAWA GENERATION");
    }
    return 0;
}