// 17. Write a program to calculate sum of numbers from m to n.

#include<stdio.h>
int main(){
    int m,n,sum=0;

    printf("Enter start and end index:");
    scanf("%d%d",&m,&n);

    for(int i=m ; i<=n ; i++){
        sum+=i;
    }
    
    printf("Sum = %d",sum);
    return 0;
}