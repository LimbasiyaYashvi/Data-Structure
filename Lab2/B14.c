//14. WAP to find the sum of 1 + (1+2) + (1+2+3) + (1+2+3+4)+ …+(1+2+3+4+….+n).

// #include<stdio.h>
// int main(){
//     int n,ans=0,count;
//     printf("Enter end value of series:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         count=0;
//         for(int j=1;j<=i;j++){
//             count+=j;
//         }
//         ans+=count;
//     }
//     printf("%d",ans);
//     return 0;
// }


// #include<stdio.h>
// int main(){
// int n,ans=0,count;
//     printf("Enter end value of series:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         count=(i*(i+1))/2;
//         ans=ans+count;
//     }
//     printf("%d",ans);
//     return 0;
// }


#include<stdio.h>
int main(){
    int n,ans=0,count=0;
    printf("Enter end value of series:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
       ans=ans+count+i;
        count=count+i;
    }
    printf("%d",ans);
    return 0;
}