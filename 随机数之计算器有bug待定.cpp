#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
int rand_n(int, int, int);
int cal(float, float, float, char, int);
float five_round(float, int);
int main()
{

	int seed = 0, i, score = 10, ct, correct = 0, fault = 0;
	int max = 10, min = 0;
	// 设置两个操作数的取值范围
	int ws = 1;
	// 设置小数尾数
	float par1, par2, anwser, minu;
	char sign[4] = { '+', '-', '*', '/' }, f;
	printf("欢迎使用Mr.X四则运算练习系统\n注：做除法时请四舍五入保留%d位小数\n",ws);
	printf("请输入题目个数\n");
	scanf("%d", &i);
	ct = i;
	while (i--)
	{
		f = sign[rand_n(0, 3, seed++)];
		if(ws)
		minu = rand_n(0, 100, seed++) * 0.01;
		else
		minu=0;
		par1 = rand_n(min, max, seed++) + minu;
		while (1)
		{
			par2 = rand_n(min, max, seed++);
			if (!par2)
				continue;
			else
				break;
		}
		printf("%.*f%c%.0f=", ws, par1, f, par2);
		scanf("%f", &anwser);
		if (cal(par1, par2, anwser, f, ws))
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

float five_round(float a, int bit)
{

	if (a > 0)
	{
		a = (int)(a * pow((double)(10), (double)(bit)) + 0.5) / pow((double)(10),
																	(double)(bit)) / 1.0;
	}
	else
	{
		a = (int)(a * pow((double)(10), (double)(bit)) - 0.5) / pow((double)(10),
																	(double)(bit)) / 1.0;
	}

	return a;

}

int cal(float x, float y, float z, char c, int minu)
{
	int t;
	switch (c)
	{
	case '+':
		t = fabs(five_round(x+y,minu) - z) <= (1e-6);
		if (x + y == z || (x - (int)x > 0 && t || y - (int)y > 0 && t))
		{
			printf("回答正确！干得漂亮！\n");
			return 1;
		}
		else
		{
			printf("非常遗憾，你做错了，正确答案是%.*f\n", minu, x + y);
			return 0;
		}
		break;

	case '-':
		t = fabs(x - y - z) <= (1e-6);
		if (x - y == z || (x - (int)x > 0 && t || y - (int)y > 0 && t))
		{
			printf("回答正确！干得漂亮！\n");
			return 1;
		}
		else
		{
			printf("非常遗憾，你做错了，正确答案是%.*f\n", minu, x - y);
			return 0;
		}
		break;

	case '*':
		t = fabs(x * y - z) <= (1e-6);
		if (x * y == z || (x - (int)x > 0 && t || y - (int)y > 0 && t))
		{
			printf("回答正确！干得漂亮！\n");
			return 1;
		}
		else
		{
			printf("非常遗憾，你做错了，正确答案是%*f\n", minu, x * y);
			return 0;
		}


		break;

	case '/':
		t = fabs(five_round(x/y,minu) - z) <= (1e-6);
		if ((y != 0) && (x / y == z) || (x - (int)x > 0 && t || y - (int)y > 0 && t)||t)
		{
			printf("回答正确！干得漂亮！\n");
			return 1;
		}
		else
		{
			printf("非常遗憾，你做错了，正确答案是%.*f\n", minu,
				   five_round(x / y, minu));
			return 0;
		}
		break;

	default:
		printf("本程序只支持四则运算！\n");
	}

	return 0;
}
