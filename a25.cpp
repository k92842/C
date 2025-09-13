#include<stdio.h>
int main()
{   int x,n;
int i,sum;
int a[50];
printf("How many numbers?(n<50)");
scanf("%d",&n);
i=0;
while(i<n)  {
            printf("Input a[%d]:",i);
            scanf("%d",&x);
            printf("The number is %d\n", x);
            a[i]=x;
            i=i+1;
            }
i=0;
sum=0;
while(i<n)  {
            
            sum=sum+a[i];
            i++;
            }
if (n > 0) {
    printf("%d", a[0]);
    for (int j = 1; j < n; j++) printf("+%d", a[j]);
    printf("=%d\n", sum);
            } 
else{
    printf("=0\n");
    }
return 0;}