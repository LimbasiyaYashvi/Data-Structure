//15. WAP to print Armstrong number from 1 to 1000.

#include<stdio.h>
#include<math.h>

int isArmstrong(int n){
    int temp=n,temp2=n,rem,count=0,pro,sum=0;

    while (n!=0){
        rem=n%10;
        count++;
        n=n/10;
    }

    while(temp!=0){
        rem=temp%10;
        sum=sum+pow(rem,count);
        temp/=10;
    }

    if(sum==temp2){
        return 1;
    }
    else{
        return 0;
    }
    
}

int main(){

    for(int i=1;i<=1000;i++){
        if(isArmstrong(i)){
            printf("%d,",i);
        }
    }
    return 0;
}