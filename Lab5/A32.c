// 32. Read two matrices and perform multiplication operation.

#include<stdio.h>
int main(){
    int n1, m1, n2, m2,ans;

    printf("Enter size of rows and columns of matrix A :");
    scanf("%d%d",&m1,&n1);

    printf("Enter size of rows and columns of matrix B :");
    scanf("%d%d",&m2,&n2);

    if(n1 != m2){
        printf("Multiplication is not possible");
        return 0;
    }

    int A[m1][n1];

    printf("Enter elements of matrix A :\n");
    for(int i=1 ; i<=m1 ; i++){
        for(int j=1 ; j<=n1 ; j++){
            printf("Enter element : ");
            scanf("%d",&A[i][j]);
        }
    }

    int B[m2][n2];

    printf("Enter elements of matrix B :\n");
    for(int i=1 ; i<=m2 ; i++){
        for(int j=1 ; j<=n2 ; j++){
            printf("Enter element : ");
            scanf("%d",&B[i][j]);
        }
    }

    for(int i=1 ; i<=m1 ; i++){
        for(int j=1 ; j<=n2 ; j++){
                ans=0;
            for(int k=1 ; k<=n1 ; k++){
                ans = ans+(A[i][k]*B[k][j]);
            }
            printf("%d ",ans);
        }
        printf("\n");
    }
    return 0;
}