// 28. Write a program to delete duplicate numbers from an array.

#include<stdio.h>
int main(){
    int n,idx;

    printf("Enter size of array:");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        printf("Enter element:");
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n-1;j++){
            if(arr[i]==arr[j]){
                idx=j;
                for(int k= idx ; k<n-1 ; k++){
                    arr[k]=arr[k+1];
                }
                n--;
            }
        }
    }

    for(int i=0 ; i<n ; i++){
        printf("%d, ",arr[i]);
    }
    return 0;
}