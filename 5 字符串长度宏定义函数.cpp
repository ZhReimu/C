#include<stdio.h>
#include<string.h>
#define Count(n) strlen(n)

int main()
{
	char str[100] = { "China" };
	printf("The Length of string is %d!\n", Count(str));
	
	return 0;
}
