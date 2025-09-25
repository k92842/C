#include<stdio.h>
int main()
{   char ch[10]={'A','B','C','D','E','F','g','1','6'
    ,'2'};
    int i;
    scanf("%d",&i);
printf("%c%c\n",ch[i/10],ch[i%10]);
return 0;}