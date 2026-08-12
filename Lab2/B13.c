//13. WAP to print prime numbers between given interval.

#include<stdio.h>

int checkPrime(int n){
    int isPrime=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime=0;
            break;
        }
    }
    return isPrime;
}

int main(){
    int st,end;

    printf("Enter start and end value:");
    scanf("%d%d",&st,&end);

    for(int i=st+1;i<end;i++){
        if(checkPrime(i)){
            printf("%d,",i);
        }
    }
    return 0;
}





