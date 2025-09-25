#include<stdio.h>
int main()
{
int num ,div;
int isPrime;
printf("Please enter an integer(q to quit):\n");
while(scanf("%d",&num)==1)
    {
    for(div=2; div*div<=num; div++)
        {
        if(num%div==0)
            {
            printf("%d,%d,",div,num/div);
            }
        else{}
        }
    }
}
/*
if(isPrime)
    printf("%d is prime.\n",num);
else
    printf("\b\b are divisors of %d\n", num);
return 0;
}*/