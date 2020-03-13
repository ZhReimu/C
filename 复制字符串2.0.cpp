//将字符数组from中的全部字符拷贝到字符数组to中。要求不使用strcpy函数，拷贝时，'\0'也要拷贝过去，'\0'后面的字符不拷贝。
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char from[]="abcdllshdfkjf\0def";
	char *to=(char*)malloc(sizeof(from));
	int i;
	for(i=0;i<sizeof(from)-1;i++)
		printf("from[%d]的内容是%c\n",i,from[i]);
	for(i=0;i<sizeof(from)-1;i++)
	{	to[i]=from[i];
	if(from[i]==0)		
		break;
	}
	printf("\n\n\n");
	int j;
	for(j=0;j<=i;j++)
		printf("to[%d]的内容是%c\n",j,to[j]);
	return 0;
}