#include<stdio.h>
#include<string.h>
int main()
{
char word[20];
scanf("%19s",word);
printf("%*.*s",5,3,word);
return 0;
}