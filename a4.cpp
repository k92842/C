#include<stdio.h>
int func1();
int func2();
int main()
{
    func1();
    return 0;
}
int func1()
{
    func2();
    return 0;
}
int func2()
{
    printf("Hello, World\n");
    return 0;
}