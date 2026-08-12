// 30. WAP to replace lowercase characters by uppercase & vice-versa in a user specified string.

#include<stdio.h> 
#include<ctype.h>
int main(){
    char word[100];
    int i;

    printf("Enter any word : ");
    scanf("%s",word);

    i=0;

    // while(word[i] != '\0'){
    //     if(islower(word[i])){
    //        word[i] = toupper(word[i]);
    //     }
    //     else if(isupper(word[i])){
    //        word[i] = tolower(word[i]);
    //     }
    //     i++;
    // }

    while(word[i] != '\0'){
        if(word[i]>='A' && word[i]<='Z'){
            word[i] = word[i]+32;
        }
        else if(word[i]>='a' && word[i]<='z'){
            word[i] = word[i]-32;
        }
        i++;
    }

    printf("%s",word);

    return 0;
}