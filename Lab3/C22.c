// 22. WAP to print Pascal triangle.

#include<stdio.h>
int main(){
    int i,j,k,n;

    printf("Enter n:");
    scanf("%d",&n);

    int arr[n][n];

    for(i=0 ; i<n ; i++){
        for(k=1 ; k<n-i ; k++){
            printf(" ");
        }
        for(j=0 ; j<=i ;j++){
           if(j==0 || j==i){
            arr[i][j]=1;
           }
           else{
            arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
           }
        printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}