#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL)); // Seed the random number generator
    int num, result;
    num = rand();
    result = num % 11;

    if(result == 1)
    {
        printf("Nobody's fault\n");
    }
    else if(result == 2)
    {
        printf("BAN\n");
    }
    else if(result == 3)
    {
        printf("Nagaredama\n");
    }
    else if(result == 4)
    {
        printf("Samidareyo\n");
    }
    else if(result == 5)
    {
        printf("Sakurazuki\n");
    }
    else if(result == 6)
    {
        printf("Start over!\n");
    }
    else if(result == 7)
    {
        printf("Syouninyokkyuu\n");
    }
    else if(result == 8)
    {
        printf("Ikutsunokoroni modoritainoka\n");
    }
    else if(result == 9)
    {
        printf("Jigoujitoku\n");
    }
    else if(result == 10)
    {
        printf("I want tomorrow to come\n");
    }
    else
    {
        printf("UDAGAWA GENERATION\n");
    }
    return 0;
}