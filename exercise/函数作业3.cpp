#include<stdio.h>
#include<string.h>
#include"未命名2.cpp"
void shanchu(char *a,char b,int len);
int main()
{
  char a[100],b;
  int len;
  scanf("%s",a);
  getchar();
  len = strlen(a);
  printf("请输入需要删除的字符：\n");
  scanf("%c",&b);
  shanchu(a,b,len);	
}

