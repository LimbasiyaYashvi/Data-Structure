// 89. Write a program to implement a Linear Search using Array.

#include<stdio.h>
int main(){
    int n,search,isFound=0;
    printf("Enter size of array : ");
    scanf("%d",&n);

    int arr[n];

    for (int i = 0; i < n; i++){
        printf("Enter element : ");
        scanf("%d",&arr[i]);
    }

    printf("Enter search element : ");
    scanf("%d",&search);

    for(int i=0 ; i<n ; i++){
        if(arr[i] == search){
            isFound = 1;
            break;
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