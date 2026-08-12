//4. WAP to find the largest among the given three numbers by user.

#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter 3 no.s:");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c){
        printf("A is greater");
    }
    else if(b>a && b>c){
        printf("B is greater");
    }
    else{
        printf("C is greater");
    }
    return 0;
}