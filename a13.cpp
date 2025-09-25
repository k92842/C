#include<stdio.h>
int main ()
{   int fahr, celsius;
fahr=-40;
celsius=5*(fahr - 32) /9;
printf("%d degrees Fahrenheit=%d degrees Celsius.\n",fahr,celsius);
return 0;}