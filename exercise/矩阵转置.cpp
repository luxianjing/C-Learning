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
    printf("ת�ƺ�ľ���BΪ��\n");
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            printf("%-3d",a[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int a[m][n],i,j;
    printf("������:\n");
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            scanf("%d",&a[i][j]);
        }
    }
    printf("����AΪ��\n");
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            printf("%-3d",a[i][j]);
        }
        printf("\n");
    }
    sort(a);
    return 0;
}

