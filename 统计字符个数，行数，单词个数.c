#include "stdio.h"
#include "string.h"
#define N 4096
// 统计字符个数，单词个数，输入行数
int main()
{
	char StringArray[N] = { 0 };
	int Character = 0, Row = 1, Word = 0, i;
	printf
		("请输入一些英语单词，英语符号\n可以输入回车以数字0加上回车结尾\n");
	scanf("%[^'0']", StringArray);

	for (i = 0; i < N; i++)
	{
		if (StringArray[i] == '\n' && StringArray[i + 1] != 0)
			Row++;
		if (StringArray[i] != '\n' && StringArray[i] != 0)
			Character++;
		if ((StringArray[i] == '\n'&&StringArray[i+1]!='\n')
			||
			(((StringArray[i] >= 32 && StringArray[i] <= 47) || (StringArray[i] >= 58 && StringArray[i] <= 64)
			  || (StringArray[i] >= 91 && StringArray[i] <= 96) || (StringArray[i] >= 123 && StringArray[i] <= 126)) && StringArray[i + 1] != '\n'))
			Word++;
	}
	printf("字符个数为：%d\n行数为%d\n单词个数为%d\n", Character, Row, Word);


	return 0;
}
