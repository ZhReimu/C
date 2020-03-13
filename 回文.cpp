#include<stdio.h>
void separate(int a)
{
	int t = a, temp = 0;
	// 定义临时变量t存放输入的原始值,temp为逆序后的值
	while (t)
	{
		temp *= 10;
		temp += t % 10;
		t = t / 10;
	}
	// 当t不等于0时循环，依次取出各个位上的数字将其✖10后加到temp里
	// 达到逆序效果
	if (temp == a)
		printf("是回文数\n");
	else
		printf("不是回文数\n");
	// 如果逆序后的值等于逆序前的值那么它就是回文，否则不是

}

void main()
{
	int a;
  retry:
	printf("请输入一个正整数：\n");
	scanf("%d", &a);
	if (a < 0)
	{
		printf("数据输入有误！请重新输入\n");
		goto retry;
	}
	separate(a);
	printf("程序结束\n");
}
