// 96. Given an array nums with n objects colored red, white, or blue, sort them inplace so that objects of the same color are adjacent, with the colors in the order
// red, white, and blue. We will use the integers 0, 1, and 2 to represent the color
// red, white, and blue, respectively.
// Sample Example-1:
// Input: nums = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]

#include<stdio.h>

void swap(int arr[], int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void sortColors(int arr[], int size){
    int low = 0, mid = 0, high = size;

    while(mid <= high){

        if(arr[mid] == 0){
            swap(arr, mid, low);
            mid++;
            low++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr, mid, high);
            high--;
        }

    }

}

int main(){
    int n;

    printf("Enter size of array : ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter\n 0.Red\n 1.White\n 2.Blue\n ");
    
    for(int i=0 ; i<n ; i++){
        printf("Enter choice : ");
        scanf("%d",&arr[i]);
    }

    sortColors(arr, n-1);

    for(int i=0 ; i<n ; i++){
        printf("%d, ",arr[i]);
    }
}