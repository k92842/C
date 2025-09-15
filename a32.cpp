#include<stdio.h>
#include<string.h>
#define STAR "**************"
int main()
{
int i=1,j=0;
while(i<=strlen(STAR))
    {
    printf("%.*s\n",i++,STAR);
    j=0;
    while(j<100) j++;
    }
return 0;
}