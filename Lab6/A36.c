// 36. WAP to calculate the sum of n numbers using Pointer.

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
        sum+=*(arr+i);
    }

    printf("Sum = %d",sum);
    return 0;
}