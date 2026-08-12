// 26. Write a program to insert a number in an array that is already sorted in an ascending order.

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

    printf("Enter new element:");
    scanf("%d",&val);

    int i=n-1;

    while(arr[i] > val){
        arr[i+1]=arr[i];
        i--;
    }

    arr[i+1]=val;
    n++;

    for(int j=0 ; j<n ; j++){
        printf("%d, ",arr[j]);
    }
    return 0;
}