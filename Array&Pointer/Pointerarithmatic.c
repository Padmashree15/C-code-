#include<stdio.h>
int main()
{
int Arr[3] = {10,20,30};
int Brr[4] = {1,2,3,4};

int *p = &Arr[0];
int *q = &Arr[2];

int *r = &Brr[1];
int *s = &Brr[3];

int iAns = 0;
iAns = p+3;

int iRet = 0;
iRet = r+3;

printf("Difference between two pointers of Arr is : %d\n",iAns);
printf("Difference between two pointers of Brr is : %d\n",iRet);

return 0;

}


