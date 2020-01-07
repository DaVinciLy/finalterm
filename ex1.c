#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    double a[1];
    double i,j=0;

    printf("please input two number");
    scanf("%lf%lf",&a[0],&a[1]);
    i=a[0]+a[1];
    j=i*i;
    printf("%f\n",j);
}