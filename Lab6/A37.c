// 37. WAP to find the largest element in the array using Pointer.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,sum=0;

    printf("Enter size of array : ");
    scanf("%d",&n);

    int *arr = (int *)malloc(n*sizeof(int));

    for(int i=0 ; i<n ; i++){
        printf("Enter element : ");
        scanf("%d",(arr+i));
    }

    int large = 0;

    for(int i=0 ; i<n ; i++){
        if(*(arr+i)>arr[large]){
            large=i;
        }
    }

    printf("%d",arr[large]);
    return 0;
}