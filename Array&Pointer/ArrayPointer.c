#include<stdio.h>
int main()
{
int Arr[4] = {10,20,30,40};

int *p = &(Arr[0]);
int *q = &(Arr[3]);

printf("Address of Index 0 from Array : %d\n",*p);
printf("Address of Index 3 from Array : %d\n",*q);

return 0;
}