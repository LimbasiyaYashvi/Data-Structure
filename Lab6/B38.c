// 38. WAP to sort the array elements using Pointer.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,temp;

    printf("Enter size of array : ");
    scanf("%d",&n);

   int *arr = (int *)malloc(n*sizeof(int));

    for(int i=0 ; i<n ; i++){
        printf("Enter element : ");
        scanf("%d",(arr+i));
    }

    for(int i=0 ; i<n-1 ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(*(arr+i)>*(arr+j)){
                temp=*(arr+i);
                *(arr+i)=*(arr+j);
                *(arr+j)=temp;
            }
        }
    }

    for(int i=0 ; i<n ; i++){
        printf("%d, ",*(arr+i));
    }
    return 0;
}