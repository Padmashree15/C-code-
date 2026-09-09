#include<stdio.h>

int Addiotion(int iValue1,int iValue2,int iValue3)
{
int iOutput = 0;

iOutput = iValue1 + iValue2 + iValue3;
    
    return iOutput;
}

int main()
{
    int iNo1 = 4;
    int iNo2 = 5;
    int iNo3 = -3;

    int iret = 0;

    iret = Addiotion(iNo1,iNo2,iNo3);

    printf("Addition is : %d\n",iret);

    return 0;
}