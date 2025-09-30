#include<stdio.h>
int main()/*在某一行的開頭打 Ctrl z 鍵入enter:代表EOF*/
{
char ch;
while((ch=getchar())!=EOF)
    {
    putchar(ch);
    }
return 0;
}