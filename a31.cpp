#include<stdio.h>
int main()
{
int i='A';
while(i<='Z')
    {
    printf("%c:%3d ",i,i);
    i++;
    }
printf("\n");
char j,k;
scanf(" %c",&j);
scanf(" %c",&k);
while(j<=k)
    {
    printf("%c ",j);
    j++;
    }
printf("\n");
char a,b;
scanf(" %c %c",&a,&b);
while(a<=b)
    {
    printf("%c ",a);
    a++;
    }
return 0;
}