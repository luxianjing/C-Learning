#include <stdio.h>
int main(){
    char str[200],i,num=0;
    while(!feof(stdin))
	{
        gets(str);
        num=1;
        for(i=0;str[i];i++)
		{
            if(str[i]==' '&&str[i+1]!=' ')
			{
                if((97<=str[i+1]&&str[i+1]<=122)||(65<=str[i+1]&&str[i]<=90))
                    num++;
            }
        }
        printf("%d words. ",num);
        for(i=0;str[i];i++)
		{
            if(i==0||(str[i-1]==' '&&str[i]!=' '))
			{
                if(97<=str[i]&&str[i]<=122)
				{
                    printf("%c",str[i]-32);
                }
                else
                    printf("%c",str[i]);
            }
            else
                printf("%c",str[i]);
        }
        printf("\n");
    }
}

