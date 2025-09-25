#include<stdio.h>
double square(double x)
{return x*x;}
int main()
{double x;
x=3.2;
printf("%f\n",square(x));
x=123;
printf("%5f\n",x);
return 0;}