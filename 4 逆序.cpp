#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
void Reverse(char *arr, int len)
{

	char t[100] = { 0 };
	int i, j = 0;
	for (i = len - 1; i >= 0;)
		t[j++] = arr[i--];
	for (i = 0; i < len; i++, j++)
		arr[i] = t[i];

}

int main()
{
	char str[100] = { "China" };
	printf("请输入一个字符串\n");
	gets(str);
	printf("逆序后的字符串是\n");
	Reverse(str, strlen(str));
	puts(str);
	printf("程序结束，按任意键继续\n");
	getch();
	return 0;
}
