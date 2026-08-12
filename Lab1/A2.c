//2. WAP to find whether a number is odd or even.

#include<stdio.h>

int main(){
    int n;
    printf("Enter no.:");
    scanf("%d",&n);

    if(n%2==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    return 0;
}