#include<stdio.h>
#include<string.h>
#include"δ����2.cpp"
void shanchu(char *a,char b,int len);
int main()
{
  char a[100],b;
  int len;
  scanf("%s",a);
  getchar();
  len = strlen(a);
  printf("��������Ҫɾ�����ַ���\n");
  scanf("%c",&b);
  shanchu(a,b,len);	
}

