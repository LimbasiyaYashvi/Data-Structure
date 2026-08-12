// 25. Write a program to delete a number from a given location in an array.

#include<stdio.h> 
int main(){
    int n,idx;

    printf("Enter size:");
    scanf("%d",&n);

    int arr[n];
    
    for(int i=0 ; i<n ; i++){
        printf("Enter element:");
        scanf("%d",&arr[i]);
    }

    printf("Enter index to delete:");
    scanf("%d",&idx);

    for(int i=idx-1 ; i<n-1 ; i++){
        arr[i]=arr[i+1];
    }

    n--;

    for(int i=0 ; i<n ; i++){
        printf("%d, ",arr[i]);
    }
    return 0;
}