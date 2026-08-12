//12. WAP to check whether a number is prime or not.

#include<stdio.h>
int main(){
    int n,isPrime = 1;

    printf("Enter no.:");
    scanf("%d",&n);

    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime = 0;
            break;
        }
    }

    if(isPrime){
        printf("%d is Prime number.",n);
    }
    else{
        printf("%d is NOT Prime number.",n);
    }
    return 0;
}