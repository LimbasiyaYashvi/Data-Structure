// 18. Write a program to calculate average of first n numbers.

#include<stdio.h>
int main(){
    int n,sum=0;

    printf("Enter n:");
    scanf("%d",&n);

    for(int i=1 ; i<=n ; i++){
        sum+=i;
    }
    
    printf("Average = %d",sum/n);
    return 0;
}