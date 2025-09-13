#include<stdio.h>
float square(float y)
{return y*y;}
int main() 
{   float x,z;
    z=4.0;
    scanf("%f",&x);
    printf("x:%f, square(x):%f\n",x,square(x));
    printf("z:%f\n",z);
    return 0; }
