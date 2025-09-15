#include<stdio.h>
#include<string.h>
int main()
{
int i=5;
    {
    printf("%d\n",(i<10));
    printf("%d\n",(i>10));
    }
    {
    printf("%d\n",(i<0)*(-2)*i+(i>0)*i);
    }
while(i<10)
    {
        {
        printf("%d ",(i<10));
        printf("%d\n",i);
        i++;
        }
    printf("%d %d\n",(i<10),i);
    }
    {
    printf("%d\n",(i<0)*(-2)*i+(i>0)*i);
    }
return 0;}