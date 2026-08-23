// 31. Read two 2x2 matrices and perform addition of matrices.

#include<stdio.h>
int main(){
    int n,m;
    printf("Enter size of array - rows and columns:");
    scanf("%d%d",&m,&n);

    int arr1[m][n], arr2[m][n];

    printf("Enter elements in Matrix 1:");
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            printf("Enter element:");
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("Enter elements in Matrix 2:");
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            printf("Enter element:");
            scanf("%d",&arr2[i][j]);
        }
    }

    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            printf("%d  ",arr1[i][j]+arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}