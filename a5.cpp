#include<stdio.h>
int func1();
int func2();
int main()
{
    printf("in main,before func1\n");
    func1();
    printf("in main,after func1\n");
return 0;}
int func1()
{printf("in func1,before func2\n");
 func2();
 printf("in func1, after func2\n");
return 0;}
int func2()
{
    printf("in func2, before printf\n");fflush(stdout);
    printf("Hello , World\n");fflush(stdout);
    printf("in func2, after printf\n");fflush(stdout);
return 0;}