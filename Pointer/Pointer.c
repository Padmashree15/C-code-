#include<stdio.h>
int main()
{
    char ch = 'M';
    int i = 77;
    float f = 5.42;
    double d = 74.3947;

    char *cp = &ch;
    int *ip = &i;
    float *fp = &f;
    double *dp = &d;

    printf("Value fetch by cp : %c\n",cp);
    printf("Value fetched by ip : %d\n",ip);
    printf("Value fetched by fp : %f\n",fp);
    printf("Value fetched by dp : %lf\n",dp);
    void *vp = &ch;
    printf("Value fetched by vp for character : %p\n",*(char *)vp);
    vp = &i;
    printf("Value fetched by vp for integer : %p\n",*(int *)vp);
    vp = &f;
    printf("Value fetched by vp for float : %p\n",*(float *)vp);
    vp = &d;

    printf("Value fetched by vp for double : %p\n",*(double *)vp);
    return 0;
}