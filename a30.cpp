#include<stdio.h>
int main()
{
int a,b;
int aplus,plusb;
a=1,b=1;
    {aplus=a;
    a++;
    ++b;
    plusb=b;
    printf("%d %d %d %d\n",a,aplus,b,plusb);
    }
printf("\n");
a=1,b=1;
    {aplus=a++;
    plusb=++b;
    printf("%d %d %d %d\n",a,aplus,b,plusb);
    }
printf("\n");
a = 1; b = 1;
    {aplus = a;   ++aplus;   // a 保持 1；aplus 變 2
    plusb = b;   b++;       // 先記住 b 的舊值 1 到 plusb，再把 b 變 2
    printf("%d %d %d %d\n", a, aplus, b, plusb);  // -> 1 2 2 1
    }
printf("\n");
a = 1; b = 1;
    {aplus = a;   ++aplus;   // a 保持 1；aplus 變 2
    plusb = b;   ++plusb;      // 先記住 b 的舊值 1 到 plusb，再把 b 變 2
    printf("%d %d %d %d\n", a, aplus, b, plusb);  // -> 1 2 2 1
    }
return 0;
}