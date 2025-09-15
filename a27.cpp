#include<stdio.h>
int main()
{int i;
i=1;
while(i<=9) 
    {
    printf("i=%d: ",i);
    int j=1;
    while(j<=9)
        {
        printf("j=%d ",j);
        j++;
        }
    printf("\n");
    i++;
    }
i=1;         
while(i<=9) 
    {
    printf("i=%d\n",i);
    int j=1;
    while(j<=9) 
        {
        printf("(%d,%d):%d ",i,j,i*j);
        j++;
        }
    printf("\n");
    i++;
    }
i=1;         
while(i<=9) 
    {
    int j=1;
    while(j<=9) 
        {
        printf("(%d,%d):%d ",i,j,i*j);
        j++;
        }
    printf("\n");
    i++;
    }
printf("\n");
i=1;
while(i<=9)
    {
    int j=1;
    while(j<=9)
        {
        printf("%2d ",i*j);
        j++;
        }
    printf("\n");
    i++;           
    }
printf("\n");
i=1;
while(i<=9)
    {
    int j=1;
    while(j<=i)
        {
        printf("%2d ",i*j);
        j++;
        }
    printf("\n");
    i++;           
    }
printf("\n");
i=1;
while(i<=9)
    {
    int j=1;
    while(j<=9-i)
        {
        printf("%2d ",i*j);
        j++;
        }
    printf("\n");
    i++;           
    }
printf("\n");
i=1;
while(i<=9)
    {
    int j=1;
    while(j<=9-i+1)
        {
        printf("%2d ",i*j);
        j++;
        }
    printf("\n");
    i++;           
    }
printf("\n");
i=1;
while(i<=9)
    {
    printf("%*s", (i - 1) * 3, "");
    int j=i;
    while(j<=9)
        {
        printf("%2d ",i*j);
        j++;
        }
    printf("\n");
    i++;           
    }
printf("\n");
i = 1;
while (i <= 9) {
    printf("%*s", (9 - i) * 3, "");   
    int j = 10 - i;                    
    while (j <= 9) {
        printf("%2d ", i * j);
        j++;
    }
    printf("\n");
    i++;
}  
return 0;
}