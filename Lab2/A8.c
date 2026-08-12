//8. WAP to find factorial of a number. (Using loop & recursion)

// #include<stdio.h>                  //using loop

// int main(){
//     int n,ans=1;
//     printf("Enter no.:");
//     scanf("%d",&n);

//     for(int i=1;i<=n;i++){
//         ans=ans*i;
//     }

//     printf("%d",ans);
//     return 0;
// }


#include<stdio.h>                         //using recursion
int fact(int n){
    if(n==1 || n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

int main(){
    int n,f;

    printf("Enter no.:");
    scanf("%d",&n);

    printf("%d",fact(n));

    return 0;
}