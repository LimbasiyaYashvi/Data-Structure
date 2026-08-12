// 20. Write a program to find whether the array contains a duplicate number or not.

#include<stdio.h>
int main(){
    int n,i,j;

    int hasDuplicate = 0;

    printf("Enter size of array:");
    scanf("%d",&n);

    int arr[n];

    for(i=0 ; i<n ; i++){
        printf("Enter element:");
        scanf("%d",&arr[n]);
    }

    for(i=0 ; i<n ; i++){
        for(j=i+1 ; j<n ; j++){
            if(arr[i]==arr[j]){
                hasDuplicate = 1;
                break;
            }
        }
    }
    
    if(hasDuplicate){
        printf("There are duplicate elements");
    }
    else{
        printf("There are not duplicate elements");
    }
    return 0;
}