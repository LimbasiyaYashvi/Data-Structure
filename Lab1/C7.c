//7. WAP to convert number of days into year, week & days [e.g. 375 days mean 1year, 1 week and 3 days].

#include<stdio.h>

int main(){
    int d,y,w;
    printf("Enter days:");
    scanf("%d",&d);

    y=d/365;
    w=(d%365)/7;
    d=(d%365)%7;

    printf("Year=%d,Week=%d,Days=%d",y,w,d);
    return 0;
}