// 第三题
// 本程序所有浮点数据均保留2位小数
#include "stdio.h"
// 标准头文件
#include "stdlib.h"
// 为调用system函数做准备
#include "string.h"
// 字符串头文件
#include "iostream"
#include<string>
// c++头文件
using namespace std;
// c++的std命名空间
#define NUM 4
// 商品数量
void result(int *quantity, string * item, float *price, int off);
// 函数声明
int main()
{
	string item[NUM] = { "粤利粤", "雷碧", "康帅傅", "咏动" };
	// 定义商品数组
	system("color 0a");
	// 设置字体颜色
	system("mode con cols=999 lines=999");
	// 设置窗口大小
	float price[NUM] = { 10, 19.9, 29.9, 99.9 };
	// 定义价格数组
	int i, c_item, cti, t, off, cu, ct = 1;
	// 定义循环变量，商品代号变量，临时变量，折扣变量用户数量，用户计算变量
	puts("欢迎使用Mr.X自助收银系统\n以下是本店出售的物品编号:");
	for (i = 0; i < NUM; i++)
		// 遍历数组输出商品代号，名称，价格
	{
		printf("商品编号%d\t品名:", i + 1);
		cout << item[i];
		printf("\t价格:%.2f\n", price[i]);
	}
	puts("请输入顾客人数");
	cin >> cu;
	while (cu--)
		// 为多用户准备循环
	{
		int quantity[NUM] = { 0 };
		// 定义数量数组
		printf("\n请第%d位客户开始购物\n", ct++);
		while (1)
			// 单个顾客购物
		{
			puts("请输入您购买的物品编号\n开始结算请输入0");
			cin >> c_item;
			// 输入商品编号
			if (!c_item)
				break;
			// 输入0就开始结算
			switch (c_item)
				// 根据情况对相应的quantity进行增加
			{
			case 1:
				puts("请输入购买件数");
				if (quantity[0])
				{
					cin >> t;
					quantity[0] += t;
				}
				else
					cin >> quantity[0];
				break;
			case 2:
				puts("请输入购买件数");
				if (quantity[1])
				{
					cin >> t;
					quantity[1] += t;
				}
				else
					cin >> quantity[1];
				break;
			case 3:
				puts("请输入购买件数");
				if (quantity[2])
				{
					cin >> t;
					quantity[2] += t;
				}
				else
					cin >> quantity[2];
				break;
			case 4:
				puts("请输入购买件数");
				if (quantity[3])
				{
					cin >> t;
					quantity[3] += t;
				}
				else
					cin >> quantity[3];
				break;
			default:
				puts("本店暂无您想要的商品,我们正在努力添加商品中!");
			}
			// 结束switch
		}
		// 结束循环
		puts("请展示你的会员卡打折数\n1.金卡(八五折)\n2.银卡(九五折)\n3.超级会员卡(八折)\n没有请输入0");
		cin >> off;
		switch (off)
		{
		case 1:
			off = 85;
			break;
		case 2:
			off = 95;
			break;
		case 3:
			off = 80;
			break;
		default:
			puts("卡片错误！系统将按照不是VIP处理！");
		case 0:
			off = 0;
			break;
		}
		// 计算会员打折数
		result(quantity, item, price, off);
		// 调用函数输出结果
	}
	return 0;
	// 程序结束
}

void result(int *quantity, string * item, float *price, int off)
// 定义输出函数，参数分别是:数量，物品，价格，折扣
{
	int i, qu = 0;
	// 定义循环变量i和总数量qu
	float before = 0;
	// 定义折扣前总价格
	for (i = 0; i < NUM; i++)
		qu += quantity[i];
	// 遍历数组求出总数量
	for (i = 0; i < NUM; i++)
		before += quantity[i] * price[i];
	// 遍历数组求出总价格
	for (i = 0; i < NUM; i++)
	{
		printf("商品\t");
		cout << item[i];
		printf("\t%d件\t小记%.2f元\n", quantity[i], quantity[i] * price[i]);
		// 遍历数组输出每件物品购买情况
	}
	if (off)
		// 判断折扣情况，根据情况输出相应的数据
		printf("您总共买了%d件商品\n原价%.2f元。经过%1.1f折后实付%.2f元\n", qu,
			   before, off / 10.0, before * (off / 100.0));
	else
		printf
			("您总共买了%d件商品\n原价%.2f元。普通会员不打折。实付%.2f元\n",
			 qu, before, before);
	printf("谢谢惠顾，欢迎下次光临\n");
}
