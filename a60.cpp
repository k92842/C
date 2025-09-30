#include<stdio.h>
int main()
{
int i,n,begn_n,c;
scanf("%d",&n);
begn_n=n;
i=1;
while(i<=n)
    i=i*2;
i=i/2;
while(i>0)
    {
    printf("%d",n/i);
    n=n%i;
    i=i/2;
    }
printf(" ");
n=begn_n;
i=1;
c=n%2;
while(i<=n)
    i=i*2;
i=i/2;
while(i>0)
    {
    printf("%d",(c+n/i)%2);
    c=n/i;
    n=n%i;
    i=i/2;
    }    
return 0;
}