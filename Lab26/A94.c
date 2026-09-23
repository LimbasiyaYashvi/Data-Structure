// 94. Write a program to implement Merge Sort using Array.

#include<stdio.h>

int merge(int arr[], int low, int mid, int high){
    int new[high-low+1], h, i, j;
    h = low;
    i = low;
    j = mid+1;

    while(h<=mid && j<=high){
        if(arr[h] < arr[j]){
            new[i] = arr[h];
            h++;
        }
        else{
            new[i] = arr[j];
            j++;
        }
        i++;
    }

    while(h <= mid){
        new[i] = arr[h];
        h++;
        i++;
    }

    while(j <= high){
        new[i] = arr[j];
        j++;
        i++;
    }

    for(int k=low ; k<=high ; k++){
        arr[k] = new[k];
    }

}

void mergeSort(int arr[], int low, int high){
    if(low < high){
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
}

int main(){
    int n,key,j;
    printf("Enter size of array : ");
    scanf("%d",&n);

    int arr[n];

    for (int i = 0; i < n; i++){
        printf("Enter element : ");
        scanf("%d",&arr[i]);
    }

    mergeSort(arr, 0, n-1);
    
    for(int i=0 ; i<n ; i++){
        printf("%d, ",arr[i]);
    }

    return 0;
}