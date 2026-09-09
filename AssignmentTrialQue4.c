#include<stdio.h>
int main()
{
    float arr[]={10.3, 43.4, 45.34, 234.45};
    float *p = arr;
    float *q = &(arr[3]);

    printf("%d\n",arr);
    printf("%f\n",p[1]);
    printf("%f\n",*(2+arr));
    printf("%f\n",q-p);

    return 0;
}



//#include<stdio.h>int main(){float arr[]={10.3, 43.4, 45.34, 234.45};float *p = arr;float *q = &(arr[3]);return 0;}