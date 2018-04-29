#include <stdio.h>
#define m 4
#define n 5
int i,j,k,t;
float aver[m]={0},temp;
void sort(int a[m][n]){
    for (i=0; i<m; i++)
        for (j=0; j<n; j++)
            for (k=0; k<n-1-i; k++)
                if (a[i][k]<a[i][k+1]) {
                    t=a[i][k];
                    a[i][k]=a[i][k+1];a[i][k+1]=t;
                }
}
void count(int a[m][n]){
    sort(a);
    for (i=0; i<m; i++) {
        for (j=1; j<n-1; j++) aver[i]+=a[i][j];
        aver[i]/=(n-2);
    }
}
void input(int a[m][n]){
    count(a);
    for (i=0; i<m; i++)
        for (j=0; j<m-1-i; j++)
            if (aver[j]<aver[j+1]) {
        temp=aver[j];aver[j]=aver[j+1];aver[j+1]=temp;
            }
    printf("选手成绩从大到小排序为:");
    for (i=0; i<m; i++) printf("%.2f ",aver[i]);
}
int main(){
    int a[m][n];
    printf("请输入成绩:\n");
    for (i=0; i<m; i++)
        for (j=0; j<n; j++) scanf("%d",&a[i][j]);
    input(a);
    printf("\n");
    return 0;
}

