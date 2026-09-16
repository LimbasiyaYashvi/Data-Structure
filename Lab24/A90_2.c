#include <stdio.h>

int binarySearch(int arr[], int low, int high, int target) {

    if (low > high) {
        return -1;
    }

    int mid = low + (high - low) / 2;

    if (arr[mid] == target) {
        return mid;
    }

    if (target < arr[mid]) {
        return binarySearch(arr, low, mid - 1, target);
    }

    return binarySearch(arr, mid + 1, high, target);
}

int main() {
    int n,search;

    printf("Enter size of array : ");
    scanf("%d",&n);
    
    int arr[n];

    for (int i = 0; i < n; i++){
        printf("Enter element : ");
        scanf("%d",&arr[i]);
    }
    
    printf("Enter search element : ");
    scanf("%d",&search);

    int result = binarySearch(arr, 0, n - 1, search);

    if(result != -1) {
        printf("Found");
    } 
    else{
        printf("Not Found");
    }

    return 0;
}
