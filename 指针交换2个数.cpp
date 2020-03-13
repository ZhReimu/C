#include<stdio.h>
void swap(int *p1, int *p2)
{
	*p1 = *p1 + *p2;
	*p2 = *p1 - *p2;
	*p1 = *p1 - *p2;
}

int main()
{
	int a = 2, b = 4, *p1 = &a, *p2 = &b;
	printf("交换前\ta是%d\tb是%d\n", a, b);
	swap(p1, p2);
	printf("交换后\ta是%d\tb是%d\n", a, b);
	printf("指针变量占用字节数是%d\n", sizeof(p2));

	return 0;
}
