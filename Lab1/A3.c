//3. WAP to determine whether the entered character is vowel or not.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    if(!isalpha(ch)){
        printf("not a valid alphabet");
    }
    else if(strchr("aeiouAEIOU",ch) != NULL){
        printf("Vowel");
    } 
    else{
        printf("Consonant");
    }
    return 0;
}
