#include<stdio.h>

void Fun()
{
    static int i = 10;
    i++;
    printf("value of i in Fun():%d\n",i);
}

int main()
{
    Fun();
    Fun();
    Fun();

    return 0;
}