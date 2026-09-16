// 90-1. Write a program to implement a Binary Search using Array. (Iterative)

#include<stdio.h>
int main(){
    int n,search,isFound=0;
    printf("Enter size of array : ");
    scanf("%d",&n);

    int low = 0,high=n-1;
    
    int arr[n];

    for (int i = 0; i < n; i++){
        printf("Enter element : ");
        scanf("%d",&arr[i]);
    }
    
    printf("Enter search element : ");
    scanf("%d",&search);

    while(low <= high){

        int mid = (low+high) / 2;

        if(search == arr[mid]){
            isFound = 1;
            break;
        }
        else if(search > arr[mid]){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }

     if(isFound){
        printf("Found");
    }
    else{
        printf("Not Found");
    }
    
    return 0;
}