#include<stdio.h>
int func1(int x){return x;}
int main()
{int z;
printf("in main ,before func1\n");
z = func1(5);
printf("%d\n",z);
z = func1(15);
printf("%d\n",z);
printf("in main, after func1\n");
z=1;
return 0;}