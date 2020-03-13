#include "stdio.h"
int main()
{
	struct stu					// 定义结构体类型stu
	{
		char name[8];			// 姓名
		char sex[8];			// 性别
		int age;				// 年龄
		char address[128];		// 地址
		float sco_cl;			// c语言成绩
		float sco_cn;			// 语文成绩
		float sco_cp;			// 计算机成绩
		float sco_to;			// 总成绩
		float sco_av;			// 平均成绩
		int rank;				// 排名
	};

	struct stu student[3] = {
		// 声明结构体类型变量student
		{"张三", "男", 18, "湖北省武汉市", 90, 80, 70, 240, 80, 1},
		{"李四", "男", 17, "湖北省武汉市", 90, 80, 70, 240, 80, 1},
		{"王五", "男", 16, "湖北省武汉市", 90, 80, 70, 240, 80, 1}
	};
	int i = 0;
	for (; i < 3; i++)
	{
		printf
			("姓名：\t性别：\t年龄\t\t地址\t\t\tc语言\t语文\t计算机\t总分\t平均分\t排名\n");
		printf("%s\t%s\t%d\t    %s\t\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%d\n", student[i].name,
			   student[i].sex, student[i].age, student[i].address, student[i].sco_cl,
			   student[i].sco_cn, student[i].sco_cp, student[i].sco_to, student[i].sco_av,
			   student[i].rank);
	}
	return 0;
}
