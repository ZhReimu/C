#include "stdio.h"
#define maxsize 1024  /*线性表的最大长度*/
typedef int datatype; /*定义表元素类型*/
typedef struct {
  datatype elem[maxsize]; /*存放表结点的数组*/
  int length;             /*表长*/
} sequenlist;
sequenlist TS;
//删除线性表中第i个结点数据，请将以下程序补充完整：
int Del(sequenlist *L, int i) {
  int j;
  if (i < 1 || i > L->length)
    return 0;
  for (j = i; j < L->length; j++)
    L->elem[j-1]=L->elem[j];//填空
  L->length--;
  return 1;
}
//在表L的第i个位置插入数据item
int Ins(sequenlist *L, int i, datatype item) {
  int j;
  if (i<1||i>L->length)//填空
    return 0;
  for (j = L->length - 1; j >= i - 1; j--)
    L->elem[j + 1] = L->elem[j];
  L->elem[j+1] = item;
  L->length++;
  return 1;
}
void display(sequenlist *L) {
  int i = 0;
  for (i=0; i < L->length; i++)
    printf("我是第%d个元素，内容是%d\n", i, L->elem[i]);
}
int main() {
  int i = 0;
  for (i = 0; i < 5; i++)
    TS.elem[i] = i + 1;
  TS.length = 5;
  display(&TS);
  printf("正在删除第3个元素,删除结果为%d\n", Del(&TS, 4));
  display(&TS);
  datatype mod = 99;
  printf("正在将原来的第3个元素前插入99,插入结果为%d\n", Ins(&TS, 3,mod));
  display(&TS);
  return 0;
}