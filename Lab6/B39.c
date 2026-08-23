// 39. WAP to check whether the string is Palindrome or not using Pointer.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char *word = (char *)malloc(sizeof(char)*10);
    char *rev= (char *)malloc(sizeof(char)*10);

    printf("Enter word : ");
    scanf("%s",word);

    strcpy(rev,word);    // Using string function
    strrev(rev);         

//     int j=0;                     // Using loop
//     for(int i=strlen(word)-1 ; i>=0 ; i--){
//      *(rev+j) = *(word+i);
//      j++;
//     }
//     *(rev+j) = '\0';

   printf("Reversed Word = %s \n",rev);

   if(!strcmp(rev, word)){
     printf("Is Palindrome");
   }
   else{
     printf("Is not Palindrome");
   }

   return 0;
}