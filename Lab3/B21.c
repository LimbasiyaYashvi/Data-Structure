// 21. Read n numbers in an array then read two different numbers, replace 1st number with 2nd number in an array and print its index and final array.

#include<stdio.h>
int main(){
    int n,num1,num2;

    printf("Enter size of array:");
    scanf("%d",&n);

    int arr[n];

    for(int i=0 ; i<n ; i++){
        printf("Enter element:");
        scanf("%d",&arr[i]);
    }

    printf("Enter num1:");
    scanf("%d",&num1);
    printf("Enter num2:");
    scanf("%d",&num2);

    for(int i=0 ; i<n ; i++){
        if(arr[i] == num1){
            arr[i]=num2;
            printf("Index=%d\n",i+1);
        }
    }

    for(int i=0 ; i<n ; i++){
        printf("%d,",arr[i]);
    }
    return 0;
}