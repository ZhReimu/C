// n个评委n个歌手去掉一个最高分和最低分求平均值并升序输出
#include "stdio.h"
#include "string.h"
// 基本头文件和字符串头文件
int main()
{
	int pw, bs, i, j;
	// 定义评委，选手，循环变量
	float sco[200], max, min, avg[200][200], sum, t;
	// 定义分数数组，最大、最小值，平均值数组，求和变量，临时变量
	puts("请输入评委人数");
	scanf("%d", &pw);
	puts("请输入选手人数");
	scanf("%d", &bs);
	for (i = 0; i < bs; i++)
		// 开始选手层循环
	{
		for (j = 0; j < pw; j++)
			// 开始评委层循环
			// 每个选手都得接受所有评委的评分
		{
			printf("请评委%d给选手%d打分\n", j + 1, i + 1);
			scanf("%f", &sco[j]);
		}
		max = sco[0];
		min = sco[0];
		for (j = 0; j < pw; j++)
		{
			if (sco[j] >= max)
				max = sco[j];
			else if (sco[j] <= min)
				min = sco[j];
		}
		// 经典的找出最大，最小值
		sum = 0;
		for (j = 0; j < pw; j++)
			// 经典求和
			sum += sco[j];
		sum = sum - max - min;
		// 去除最大值，最小值
		avg[0][i] = i + 1;
		// 选手编号
		avg[1][i] = sum / (pw - 2);
		// 选手平均分数
	}
	// 接下来进行排序
	for (i = 0; i < bs - 1; ++i)	// 因为每次需要和a[i]后面的数进行比较,所以到a[n-2](倒数第2个元素)就行
	{
		for (j = i + 1; j < bs; ++j)	// j从i后一个开始,a[i]与a[j]进行比较
		{
			if (avg[1][i] > avg[1][j])	// a[i]为当前值,若是比后面的a[j]大,进行交换
			{
				// 交换分数
				t = avg[1][i];
				avg[1][i] = avg[1][j];
				avg[1][j] = t;
				// 交换编号
				t = avg[0][i];
				avg[0][i] = avg[0][j];
				avg[0][j] = t;

			}
		}
	}
	puts("\t综上所述，各个选手的成绩降序排序如下:\n");
	for (i = 0; i < bs; i++)
		// 输出
		printf("\t%d号选手的平均分是%f\n", (int)avg[0][i], avg[1][i]);
	return 0;
	// 程序结束
}
