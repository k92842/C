#include<stdio.h>
int main()
{
int x;
scanf("%d",&x);
while(x)
    {
    printf("%d",x%2);
    x=x/2;
    }
printf("\n");
int i,j,a[32];
scanf("%d",&j);
i=0;
while(j)
    {
    a[i]=j%2;
    i++;
    j=j/2;
    }
    i=i-1;
while(i>=0)
    {
    printf("%d",a[i]);
    i--;
    }
return 0;}