//���ַ�����from�е�ȫ���ַ��������ַ�����to�С�Ҫ��ʹ��strcpy����������ʱ��'\0'ҲҪ������ȥ��'\0'������ַ���������
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char from[]="abcdllshdfkjf\0def";
	char *to=(char*)malloc(sizeof(from));
	int i;
	for(i=0;i<sizeof(from)-1;i++)
		printf("from[%d]��������%c\n",i,from[i]);
	for(i=0;i<sizeof(from)-1;i++)
	{	to[i]=from[i];
	if(from[i]==0)		
		break;
	}
	printf("\n\n\n");
	int j;
	for(j=0;j<=i;j++)
		printf("to[%d]��������%c\n",j,to[j]);
	return 0;
}