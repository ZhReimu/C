#include "stdio.h"
int main()
{
	struct stu
	{
		char name[16];
		float english, chinese, math;
	};
	struct stu student[3] = {
		{"张三", 80, 90, 60},
		{"李四", 60, 90, 60},
		{"王五", 50, 90, 60}
	};
	int i = 0;
	for (; i < 3; i++)
		printf("%s的平均成绩是%.2f\n", student[i].name,
			   (student[i].english + student[i].chinese + student[i].math) / 3);
	return 0;
}
