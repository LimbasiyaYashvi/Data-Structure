// 97. You are given an array of positive integers and an integer K. Find the length of 
// the longest subarray such that the sum of the subarray is less than or equal to K.

#include <stdio.h>

int longest_SubArray(int arr[], int n, int k) {
    int left = 0, right = 0;
    int current_sum = 0;
    int max_len = 0;

    while (right < n) {

        current_sum += arr[right];

        while (current_sum > k && left <= right) {
            current_sum -= arr[left];
            left++;
        }

        int current_len = right - left + 1;

        if (current_len > max_len) {
            max_len = current_len;
        }

        right++;

    }

    return max_len;
}

int main() {
    int n, k, result;

    printf("Enter size of array : ");
    scanf("%d",&n);

    int arr[n];
    
    for(int i=0 ; i<n ; i++){
        printf("Enter element : ");
        scanf("%d",&arr[i]);
    }

    printf("\nEnter target number : ");
    scanf("%d",&k);

    result = longest_SubArray(arr, n, k);

    printf("\nLongest subarray length = %d", result);

    return 0;
}