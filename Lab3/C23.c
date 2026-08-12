// 23. WAP to sort the N names in an alphabetical order.

#include<stdio.h>
#include<string.h>

int main(){
    int n;
    printf("Enter how many names:");
    scanf("%d",&n);

    char name[n][10];
    char temp[10];

    for (int i = 0 ; i < n ; i++){
        printf("Enter name:");
        scanf("%s",name[i]);
    }

    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            if( strcmp(name[i],name[j]) > 0){
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
        }
    }

    for(int i=0 ; i<n ; i++){
        printf("%s, ",name[i]);
    }
    return 0;
}