#include<stdio.h>
void triangle(char ch, int m)
{
int i,j;
for(i=1;i<=m-1;i++)
    {
    for(j=1;j<=i;j++)
        {
        printf("%c",ch);
        }
    printf("\n");
    }
for(i=m;i>=2;i--)
    {
    for(j=1;j<=i;j++)
        {
        printf("%c",ch);
        }
    printf("\n");
    }
}
int main(void)
{
char ch;
int M,N,i;
scanf("%c%d%d",&ch,&M,&N);
if(M==1)
    {
    for(i=0;i<N-1;i++)
        printf("%c\n",ch);
    }
else{
    for(i=0;i<N;i++)
        triangle(ch,M);
    }
if(M>0 && N>0)
    printf("%c",ch);
return 0;
}