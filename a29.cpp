#include<stdio.h>
int main()
{
int i,j;
int a[10][10]={0};
a[1][1]=1;
i=2;
while(i<=9)
    {
    j=1;
    while(j<=9)
        {
        a[i][j]=a[i-1][j-1]+a[i-1][j];
        j=j+1;
        }
    i=i+1;
    }
i=1;
while(i<=9)
    {
    j=1;
    while(j<=9)
        {
        printf("%3d",a[i][j]);
        j=j+1;
        }
    printf("\n");
    i=i+1;
    }
printf("\n");
i=0;
while(i<=9)
    {
    j=0;
    while(j<=9)
        {
        printf("%3d",a[i][j]);
        j=j+1;
        }
    printf("\n");
    i=i+1;
    }
return 0;
}