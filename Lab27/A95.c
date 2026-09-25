// 95. Write a program to implement Quick Sort using Array.

#include<stdio.h>

void quick(int arr[], int low, int high){
    int flag = 1, temp;
    int i, j, key;
    
    if(low <  high){

        i = low;
        j = high + 1;
        key = arr[low];

        while(flag == 1){
            i++;
            while(arr[i] < key){
                i++;
            }

            j--;
            while(arr[j] > key){
                j--;
            }

            if(i < j){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            else{
                flag = 0;
            }
        }

        temp = arr[low];
        arr[low] = arr[j];
        arr[j] = temp;

        quick(arr, low, j-1);
        quick(arr, j+1, high);
    }

}

int main(){
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);

    int arr[n];

    for (int i = 0; i < n; i++){
        printf("Enter element : ");
        scanf("%d",&arr[i]);
    }

    quick(arr, 0, n-1);
    
    for(int i = 0 ; i < n ; i++){
        printf("%d, ",arr[i]);
    }

    return 0;
}