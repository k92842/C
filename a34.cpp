#include<stdio.h>
#include<string.h>
int main()
{
char word[20];
scanf("%19s",word);
int i=1;
while(i<=strlen(word))
    {
    printf("%*.*s\n",strlen(word),i,word);
    i++;
    }

return 0;
}