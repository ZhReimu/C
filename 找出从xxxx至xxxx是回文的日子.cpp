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
		printf("%d是回文数\n",a);
//	else
//		printf("不是回文数\n");
	// 如果逆序后的值等于逆序前的值那么它就是回文，否则不是

}

int GetDate(int MaxYear)
{
	int year = 1000, month = 1, day = 1, date, MaxDay;
	while (year <= MaxYear)
	{
		for (month = 1; month <= 12; month++)
		{
			date = year * 100 + month;
			if (month == 2)
			{
				date = year * 100;
				date += month;
				if (((year % 4 == 0) && (year % 100 != 0)) || year % 400 == 0)
					MaxDay = 29;
				else
					MaxDay = 28;
			}
			if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10
				|| month == 12)
				MaxDay = 31;
			if (month == 3 || month == 4 || month == 6 || month == 9 || month == 11)
				MaxDay = 30;

			for (day = 1; day <= MaxDay; day++)
			{
				if (day < 10)
				{
					date *= 100;
					date += day;
				//	printf("%d\n", date);
				 separate(date);
					date /= 100;
				}
				else
				{
					date *= 100;
					date += day;
				//	printf("%d\n", date);
				 separate(date);
					date /= 100;
				}


			}
		}
		year++;

	}

}

void main()
{
	GetDate(2020);
	printf("程序结束\n");
}
