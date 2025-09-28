#include<stdio.h>
#define N 100
int A[N+1];
int main()
{
int i,j;
for(i=0;i<=N;i++) A[i]=1;
for(i=2;i*i<=N;i++)
    {
    if(A[i])
        {
        for(j=i*i;j<=N;j=j+i)
            {
            A[j]=0;
            }
        }
    }
for(i=2;i<=N;i++)
    {
    if(A[i]) printf("%d, ", i);
    }
}