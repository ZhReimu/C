#include <stdio.h>
int main()
{
    int a;
    char c;
    do
    {
    	  printf("请输入a的值\n");
        scanf("%d",&a);
        printf("请输入c的值\n");
      //  fflush(stdin);
      //  fflush(stdout);
        getchar();
        scanf("%c",&c);
        printf("a=%d     c=%c\n",a,c);
        
    }while(c!='N');
}