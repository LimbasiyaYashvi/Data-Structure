// 27. Write a program to delete a number from an array that is already sorted in an ascending order.

#include<stdio.h>
int main(){
    int n,val,idx;

    printf("Enter size:");
    scanf("%d",&n);

    int arr[n];
    
    for(int i=0 ; i<n ; i++){
        printf("Enter element:");
        scanf("%d",&arr[i]);
    }

    printf("Enter value to delete:");
    scanf("%d",&val);

    for(int i= 0 ; i<n ; i++){
        if(arr[i] == val){
            idx=i;
        }
    }

    for(int i= idx ; i<n-1 ; i++){
        arr[i]=arr[i+1];
    }

    n--;

    for(int i=0 ; i<n ; i++){
        printf("%d, ",arr[i]);
    }
    return 0;
    
}