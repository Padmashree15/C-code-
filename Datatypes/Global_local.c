#include<stdio.h>

int P = 6;

void Demo()
{
    int B = 50;

    printf("Value of B from void : %d\n",B);
    printf("Value of P fron outside of the block : %d\n",P);

    
}

int main()
{
int A = 45;

printf("Value of A from main : %d\n",A);
printf("Value of P from outsid of the block : %d\n",P);

Demo();

return 0;
}