#include <stdio.h>
#define m 4
#define n 4
void sort(int a[m][n]){
    int i,j,t;
    for (i=0; i<m; i++) {
        for (j=i; j<n; j++) {
            t=a[j][i];
            a[j][i]=a[i][j];
            a[i][j]=t;
        }
    }
    printf("转制后的矩阵B为：\n");
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            printf("%-3d",a[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int a[m][n],i,j;
    printf("请输入:\n");
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            scanf("%d",&a[i][j]);
        }
    }
    printf("矩阵A为：\n");
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            printf("%-3d",a[i][j]);
        }
        printf("\n");
    }
    sort(a);
    return 0;
}

