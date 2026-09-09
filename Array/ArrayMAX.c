#include<stdio.h>
int main()
{
    char Arr[4] = {'A','B','C','D'};
    int Brr[3] = {1,2,3};
    float Crr[2] = {3.14,2.34};
    double Drr[2] = {56.78902,83.836787};

    printf("Size of Arr : %d\n",sizeof Arr);  //4
    printf("Size of Brr : %d\n",sizeof Brr);  //12
    printf("Size of Crr : %d\n",sizeof Crr);  //8
    printf("Size of Drr : %d\n",sizeof Drr);  //16

    printf("Address of Arr : %d\n",Arr);
    printf("Address of Brr : %d\n",Brr);
    printf("Address of Crr : %d\n",Crr);
    printf("Address of Drr : %d\n",Drr);

    printf("Address of Arr : %d\n",&Arr);
    printf("Address of Brr : %d\n",&Brr);
    printf("Address of Crr : %d\n",&Crr);
    printf("Address of Drr : %d\n",&Drr);


    return 0;
}