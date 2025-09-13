#include<stdio.h>
float square(float y)
{   return y*y;}
int main()
{   float x;
scanf("%f",&x);
printf("%f square=%f\n",x,square(x));
return 0;}