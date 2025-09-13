#include<stdio.h>
double square(double x)
{return x*x;}
int main()
{   double x;
x=3.1415;
printf("%f square is %f\n",x ,square(x));
return 0;}