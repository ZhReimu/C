#include "stdio.h"
#include "string.h"
void a()
{
	int a, b;
	int ret;
	char aa[]="a'b";
	puts(aa);
	// 循环输入a,b值。如果格式错误，重新输入。如果得到正确值，终止输入。
	while (1)
	{
		ret = scanf("%d,%d", &a, &b);	
		// 必须以逗号分隔。
		if (ret != 1)		
			// 格式错误。
		{
			fflush(stdin);		
			// 清除输入缓冲，抛弃非法字符。
			printf("输入格式错误，请重新输入。\n");
				// 提示重新输入。
		}
		else
			break;				
			// 输入正确，退出循环。
	}
	printf("a是%d,b是%d",a,b);
}

int main()
{

	a();
	puts("程序结束");

	return 0;
}
