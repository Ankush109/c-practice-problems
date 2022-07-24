#include<stdio.h>
int main(){
    int m ,n, sum=0;
    int a[3][4] ,b[4][2], result[3][2];
    printf("enter the our first matrix");
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);

        }
    }
      printf("enter the our second matrix");
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);

        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++)
        {
            // result calculation
            for(int k=0;k<4;k++){
                    sum+=a[i][k]*b[k][j];
            }
            result[i][j]=sum;
            sum=0;

        }
    }
}