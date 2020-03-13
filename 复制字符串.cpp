#include "stdio.h"
#include "string.h"
void Strcpy(char* ,char*);
int main( )
{
char from[20]={"Hello\\0World"}, to[20];
printf("字符数组from里的字符串是\n%s\n", from);
Strcpy(to, from);
printf("复制后数组to里的的字符串是\n%s\n",to);
return 0;
}
void Strcpy(char* a, char* b)
{
int i=0;
while(a[i]!='\0')
a[i] = b[i],i++;
}
