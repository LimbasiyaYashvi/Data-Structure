// 19. Write a program to find position of the smallest number & the largest number from given n numbers.

#include<stdio.h>
int main(){
    int n;

    printf("Enter size of array:");
    scanf("%d",&n);

    int arr[n];

    for(int i=0 ; i<n ; i++){
        printf("Enter element:");
        scanf("%d",&arr[i]);
    }

    int small=0,large=0;
    
    for(int i=0 ; i<n ; i++){
        if(arr[i]<arr[small]){
            small=i;
        }
        if(arr[i]>arr[large]){
            large=i;
        }
    }
    
    printf("Smallest no. position = %d \nLargest no position = %d",small+1,large+1);
    return 0;
}