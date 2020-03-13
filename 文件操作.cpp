#include <stdio.h>
void writeConfig();
void writeQues(char[], int, int);
void readConfig(char[]);
int main()
{
	FILE *Config;
	int how;
	char set[64];
	char path[] = { "/mnt/sdcard/config.txt" };
	Config = fopen(path, "r");
	if (Config != NULL)
	{
		printf("读取配置文件成功！\n配置文件内容如下：\n");
		printf("使用该配置请输入1，重新设置请输入2\n");
		scanf("%d", &how);
		fclose(Config);
	}
	else
	{
		printf
			("读取文件失败！\n您可能是第一次运行本软件\n请输入某些程序需要的参数\n");
		fclose(Config);
		writeConfig();
	}
	if (how == 1)
	{
		printf("使用已经存在的配置文件生成题目中\n");
		// writeQues(path);
	}
	else if (how == 2)
	{
		writeConfig();
	}
	printf("程序结束");
	return 0;
}

void writeConfig()
{




}

void writeQues(char sign[], int a, int b)
{

}

readConfig(char path[], char *res)
{
	FILE *Cf;
	char sign[32] = { 0 };
	char rand[16] = { 0 };
	int i;
	Cf = fopen(path, "w+");
	if (Cf == NULL)
		printf("文件打开失败\n");
	else
	{
		for (i = 1; i < 5; i++)
		{
			if (i == 2)
				fgets(sign, 16, Cf);
			if (i == 4)
				fgets(rand, 16, Cf);
		}
	}
	strcpy(sign, rand);
	strcpy(res, sign);

}
