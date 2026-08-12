// 24. Write a program to insert a number at a given location in an array.

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

    printf("Enter element and its index:");
    scanf("%d%d",&val,&idx);

    for(int i= n-1 ; i>idx ; i--){
        arr[i+1]=arr[i];
    }

    arr[idx]=val;
    n++;

    for(int i=0 ; i<n ; i++){
        printf("%d, ",arr[i]);
    }
    return 0;
}