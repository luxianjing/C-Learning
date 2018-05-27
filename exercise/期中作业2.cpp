#include <stdio.h>
#include <string.h>
int main(){
    char str[200],t;
    int i,j;
    unsigned long m;
    while (!feof(stdin)) 
	{
        scanf("%s",str);
        m=strlen(str);
        for (i=0; str[i]; i++) 
		{
            if (65<=str[i]&&str[i]<=90) 
			{
                str[i]+=32;
            }
        }
        for (i=0; i<m; i++) 
		{
            for (j=0; j<m-i-1; j++) 
			{
                if (str[j]>str[j+1]) 
				{
                    t=str[j];
                    str[j]=str[j+1];
                    str[j+1]=t;
                }
            }
        }
        for (i=0; str[i]; i++) 
		{
            if (str[i]==str[i+1]) 
			{
                continue;
            }
            else
                printf("%c",str[i]);
        }
        printf("\n");
    }
}

