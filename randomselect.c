#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, result;
    num=rand();
    result=num%11;
    printf("%d",result);
    return 0;
}