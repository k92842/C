#include<stdio.h>
int A[5]={0,1,2,3,4};
int main()
{
int i,j,x;
scanf("%d%d",&i,&j);
x=A[i];
A[i]=A[j];
A[j]=x;
for(int k=0;k<5;k++)
printf("%d",A[k]);
printf("\n"); 
return 0;
}