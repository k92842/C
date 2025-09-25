#include<stdio.h>
int check(int v)
{
if(v)
    {
    printf("True\n");
    }
else{
    printf("False\n");
    }
return v;
}
int main()
{
int x=5,y=3;
check(x>2&&y==3);
check(!(x<2||y==3));
check(x!=0&&y);
check(x==0||!y);
check(x!=y&&(20/x)<y);
check(!(y>5||y<2)&&(!x%5));
check(!x&&x);
return 0;
}