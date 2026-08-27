// 92. Write a program to implement Selection Sort using Array.

#include<stdio.h>
int main(){
    int n,min;
    printf("Enter size of array : ");
    scanf("%d",&n);

    int arr[n];

    for (int i = 0; i < n; i++){
        printf("Enter element : ");
        scanf("%d",&arr[i]);
    }

    for(int i=0 ; i<n-1 ; i++){
        min = i;
        for(int j=i+1 ; j<n ; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }

        if(min != i){
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }

    for(int i=0 ; i<n ; i++){
        printf("%d, ",arr[i]);
    }
    
    return 0;
}