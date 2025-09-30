#include<stdio.h>
int main()
{
char ch;
while((ch=getchar())!='@')
putchar(ch);/*單行可省略{}*/
return 0;
}