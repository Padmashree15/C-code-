#include<stdio.h>

int i;
int j = 11;

extern int no;

int main()
{
    printf("Value if i : %d\n",i);
    printf("Value if j : %d\n",j);
    printf("Value if no : %d\n",no);

    return 0;
}

//gcc Main.c Helper.c -o myexe
//gcc Main.c Helper.c -o myexe