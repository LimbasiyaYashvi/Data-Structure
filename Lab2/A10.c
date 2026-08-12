//10. WAP to reverse a number.

#include<stdio.h>
int main(){
    int n,temp,rem,rev=0;

    printf("Enter no.:");
    scanf("%d",&n);

    temp=n;
    while (n!=0){
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }

    printf("%d",rev);
    return 0;
}