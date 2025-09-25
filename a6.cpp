#include<stdio.h>
int func1(int x);
int func2(int y);
int main()
{
    printf("in main,before func1\n");
    func1(5);
    printf("in main,after func1\n");
return 0;}
int func1(int x)
{printf("in func1,before func2\n");
 func2(x);
 printf("in func1, after func2\n");
return 0;}
int func2(int y)
{
    printf("in func2, before printf\n");
    printf("Hello , World\n");
    printf("%d\n", y );
    printf("in func2, after printf\n");
return 0;}