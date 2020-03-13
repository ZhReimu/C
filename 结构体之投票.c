#include "stdio.h"
#include "string.h"
#define N 1024
int main()
{
	struct py
	{
		char name[64];
		int flag;
	};
	struct py player[N];
	int i, j, pw, xs;
	char t[64];
	printf("请输入评委数量\n");
	scanf("%d", &pw);
	printf("请输入选手数量\n");
	scanf("%d", &xs);
	for (i = 0; i < xs; i++)
	{
		printf("请输入第%d个选手名\n", i + 1);
		scanf("%s", &player[i].name);
		player[i].flag = 0;
	}

	for (i = 0; i < pw; i++)
	{
		printf("请%d号评委为您喜欢的选手投票(输入选手名)\n", i + 1);
		scanf("%s", &t);
		for (j = 0; j < xs; j++)
			if (!strcmp(player[j].name, t))
				player[j].flag++;
	}
	printf("投票结果如下：\n");
	printf("姓名：\t票数\n", i);
	for (i = 0; i < xs; i++)
		printf("%s\t%d\n", player[i].name, player[i].flag);


	return 0;
}
