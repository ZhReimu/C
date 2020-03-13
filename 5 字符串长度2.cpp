#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int Count(char *arr)
{
	int i;
	for (i = 0; arr[i] != '\0'; i++);
	return i;

}

int main()
{
	char str[100] = { "China" };
	printf("请输入一个字符串\n");
	gets(str);
	printf("The Length of string is %d!\n", Count(str));
	getch();
	return 0;
}
