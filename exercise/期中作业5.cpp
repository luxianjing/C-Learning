#include <stdio.h>
#include <string.h>
int main (){
    int i,j,a,b;
    unsigned long k;
    char str[400],s[200][200];
    while(!feof(stdin))
	{
        a=0;b=0;
        gets(str);
        k=strlen(str);
        for(i=0;i<k;i++)
            if(str[i]>=65&&str[i]<=90)
                str[i]=str[i]+32;
        i=0;
        while(i<k)
		{
            while(str[i]>=97&&str[i]<=122)
                s[a][b++]=str[i++];
            if(b>0)
                s[a][b++]='\0';
            if(b!=0)
                a++;
            i++;b=0;
        }
        for(i=0;i<a;i++)
            for(j=i+1;j<a;j++)
                if(strcmp(s[i],s[j])>0)
				{
                    strcpy(str,s[i]);
                    strcpy(s[i],s[j]);
                    strcpy(s[j],str);
                }
        for (i=1; i<a; i++) 
		{
            if (i==1)
                printf("%s",s[i-1]);
            if (strcmp(s[i], s[i-1])==0)
                continue;
            else
                printf(" %s",s[i]);
        }
        printf("\n");
    }
}

