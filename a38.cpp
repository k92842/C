#include<stdio.h>
int main()
{
int x;
while(scanf("%d",&x)!=EOF)
    {
    printf("x=%d\n",x);
    }
printf("%d\n",EOF); //Ctrl Z
return 0;}