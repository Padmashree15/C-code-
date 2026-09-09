#include<stdio.h>
int main()
{
    float arr[] = {10.3,43.4,45.34,234.45};
    float *p = NULL;
    float *q = NULL;

    p = arr;
    q = &(arr[3]);

    printf("%d\n",p); //100
    printf("%d\n",q); //112
    printf("%f\n",*q);  //234.45
    printf("%f\n",*p);  //10.3
    printf("%f\n",*(p+2));  //45.34
    printf("%f\n",*(p+1));  //43.4
    printf("%f\n",p[1]);  //100
    printf("%f\n",*(2 + arr)); //45.34
    printf("%f\n",0[arr]);  //100
    printf("%f\n",q-p);  //12
    printf("%f\n",*(q-2));  //104

    return 0;
}