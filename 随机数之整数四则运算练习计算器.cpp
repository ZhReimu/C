#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
int rand_n(int, int, int);
int cal(float, float, float, char);
int main()
{

	int seed = 0, i, score = 10, ct, correct = 0, fault = 0;
	int max = 10, min = 0;
	// 设置两个操作数的取值范围
	float par1, par2, anwser;
	char sign[4] = { '+', '-', '*', '/' }, f;
	printf("欢迎使用Mr.X四则运算练习系统\n注：做除法时请保留6位小数\n");
	printf("请输入题目个数\n");
	scanf("%d", &i);
	ct = i;
	while (i--)
	{
		f = sign[rand_n(0, 3, seed++)];
		par1 = rand_n(min, max, seed++);
		while (1)
		{
			par2 = rand_n(min, max, seed++);
			if (!par2&&f=='/')
				continue;
			else
				break;
		}
		printf("%.0f%c%.0f=",par1, f, par2);
		scanf("%f", &anwser);
		if (cal(par1, par2, anwser, f))
			correct++;
		else
			fault++;
	}
	printf
		("\n训练结束！总共有%d道题目\n一题%d分，总分是%d分\n你做对了%d道题目\n做错了%d道题目\n总共得到了%d分\n\n欢迎下次使用！\n",
		 ct, score, score * ct, correct, fault, correct * score);

	return 0;
}

int rand_n(int min, int max, int seed)
// 返回一个随机数，整数
{
	srand((int)time(NULL) + seed);
	return rand() % (max - min + 1) + min;
}

int cal(float x, float y, float z, char c)
{
	int t;
	t = fabs(x * y - z) <= (1e-6);
	switch (c)
	{
	case '+':
		if (x + y == z)
		{
			printf("回答正确！干得漂亮！\n");
			return 1;
		}
		else
		{
			printf("非常遗憾，你做错了，正确答案是%.0f\n", x + y);
			return 0;
		}
		break;

	case '-':
		if (x - y == z)
		{
			printf("回答正确！干得漂亮！\n");
			return 1;
		}
		else
		{
			printf("非常遗憾，你做错了，正确答案是%.0f\n", x - y);
			return 0;
		}
		break;

	case '*':
		if (x * y == z || (x - (int)x > 0 && t || y - (int)y > 0 && t))
		{
			printf("回答正确！干得漂亮！\n");
			return 1;
		}
		else
		{
			printf("非常遗憾，你做错了，正确答案是%f\n", x * y);
			return 0;
		}


		break;

	case '/':
		if ((y != 0) && (x / y == z))
		{
			printf("回答正确！干得漂亮！\n");
			return 1;
		}
		else
		{
			printf("非常遗憾，你做错了，正确答案是%f\n",x/y);
			return 0;
		}
		break;

	default:
		printf("本程序只支持四则运算！\n");
	}

	return 0;
}
