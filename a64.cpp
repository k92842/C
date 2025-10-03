#include<stdio.h>
int A[2000][2000];
int main()
{
int i,j;
int N;
scanf("%d",&N);
for(i=0;i<N;i++)
    {
    for(j=0;j<N;j++)
        {
        scanf("%d",&A[i][j]);
        }
    }
for(i=0;i<N;i++)
    {
    printf("%d",A[i][0]);
    for(j=0;j<=i;j++)
        {
        printf(" %d",A[i-j][j]);
        }
    printf("\n");
    }
for(i=N-2;i>0;i--)
    {
    printf("%d",A[N-1-0][N-1-i]);
    for(j=1;j<=i;j++)
        {
        printf(" %d",A[N-1-j][N-1-(i-j)]);
        }
    printf("\n");
    }
return 0;
}
