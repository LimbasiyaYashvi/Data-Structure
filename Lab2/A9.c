//9. WAP to find power of a number using loop.

#include<stdio.h>
int main(){
    int a,b,ans=1;

    printf("Enter no. and power:");
    scanf("%d%d",&a,&b);

    for(int i=1;i<=b;i++){
        ans=ans*a;
    }

    printf("%d",ans);
    return 0;
}