//6. WAP to convert seconds into hours, minutes & seconds and print in HH:MM:SS[e.g. 10000 seconds mean 2:46:40 (2 Hours, 46 Minutes, 40 Seconds)].

#include<stdio.h>

int main(){
    int s,h,m;
    printf("Enter seconds:");
    scanf("%d",&s);

    h=s/3600;
    m=(s%3600)/60;
    s=(s%3600)%60;

    printf("%d:%d:%d",h,m,s);
    return 0;
}