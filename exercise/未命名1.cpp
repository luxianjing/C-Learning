#include <stdio.h>
int i=0,j=0,x,y,m,n,max,min;
int a[4][4];
void get(int a[][4]){
    printf("���������Ԫ��:\n");
    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) {
            scanf("%d",&a[i][j]);
        }
    }
}
void maxmin(int a[][4]){
    max=a[0][0];
    min=a[0][0];
    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) {
            if (min>a[i][j]) {
                min=a[i][j];
                x=i;
                y=j;
            }
            if (max<a[i][j]) {
                max=a[i][j];
                m=i;
                n=j;
            }
        }
    }
    printf("���ֵΪ:%d���±�Ϊ%d,%d\n",max,m,n);
    printf("��СֵΪ:%d���±�Ϊ%d,%d\n",min,x,y);
}
int main(){
    get(a);
    maxmin(a);
    return 0;
}



