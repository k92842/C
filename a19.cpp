#include<stdio.h>
int main()
{  
    { char ch[7]={'6','J','Y','0','4','K','o'};
int i;
scanf("%d",&i);
printf("%c%c%c\n",ch[i/100],ch[(i/10)%10],ch[i%10]);}

    {char ch[10]={'6','J','Y','0','4','K','o',
'U','F','0'};
int i;
scanf("%d",&i);
printf("%c%c%c\n",ch[i/100],ch[(i/10)%10],ch[i%10]);}
return 0;
}