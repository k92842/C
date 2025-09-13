#include<stdio.h>
int main()
{   printf("%s\n",__FILE__);
    printf("%d\n",__LINE__);
    printf("%S\n",__FUNCTION__);
    printf("%s\n",__PRETTY_FUNCTION__);
    printf("%s\n",__DATE__);
printf("%s\n",__TIME__);
return 0;}