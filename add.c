#include <stdio.h>
int main(){
    int r,c;
    printf("Enter the number of rows:");
    scanf("%d",&r);
    printf("Enter the number of columns:");
    scanf("%d",&c);

    int a[r][c],b[r][c],sum[r][c];

    printf("Enter the ele in 1:");
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
     printf("Enter the ele in 2:");
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
           sum[i][j]=a[i][j]*b[i][j];
        }
    }
    printf("\nthe fir mat\n");
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nthe sec mat\n");
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
}
    printf("\nthe fir mat\n");
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
