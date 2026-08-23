// 33. Design anagram game using array.
//  Allow a user to enter N words and store it in an array.
//  Generate a random number between 0 to N-1.
//  Based on the random number generated display the word stored at that
// index of an array and allow user to enter its anagram.
//  Check whether the word entered by the user is an anagram of displayed
// number or not and display an appropriate message.
//  Given a word A and word B. B is said to be an anagram of A if and only if the
// characters present in B is same as characters present in A, irrespective of
// their sequence. For ex: “LISTEN” == “SILENT”

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>

int main(){

    int n;
    printf("Enter how many words : ");
    scanf("%d",&n);

    char words[n][50];

    for(int i=0 ; i<n ; i++){
        printf("Enter word : ");
        scanf("%s",words[i]);
    }

    srand(time(NULL));
    int random_idx = rand() % n;

    printf("Random index = %d\n",random_idx);
    printf("Random Index's word = %s\n\n",words[random_idx]);

    char anagram[50];
    printf("Enter anagram word : ");
    scanf("%s",anagram);


    if(strlen(anagram) != strlen(words[random_idx])){
        printf("Not an Anagram Word (length)");
        return 0;
    }

    char random_word[50];
    strcpy(random_word, words[random_idx]);

    //Using Sorting

    // char temp;
    // for(int i=0 ; i<strlen(random_word)-1 ; i++){
    //     for(int j=i+1 ; j<strlen(random_word) ; j++){
    //         if(random_word[i] > random_word[j]){
    //             temp = random_word[i];
    //             random_word[i] = random_word[j];
    //             random_word[j] = temp;
    //         }
    //     }
    // }

    // printf("Sorted Random Word = %s\n",random_word);

    // for(int i=0 ; i<strlen(anagram)-1 ; i++){
    //     for(int j=i+1 ; j<strlen(anagram) ; j++){
    //         if(anagram[i]>anagram[j]){
    //             temp=anagram[i];
    //             anagram[i]=anagram[j];
    //             anagram[j]=temp;
    //         }
    //     }
    // }

    // printf("Sorted Anagram Word = %s\n",anagram);

    // if(!strcmp(random_word , anagram)){
    //     printf("It is an Anagram Word");
    // }
    // else{
    //     printf("Not an Anagram Word");
    // }

    //Using counting of frequency

    int freq1[26]={0};
    for(int i=0 ; i<strlen(random_word) ; i++){
        freq1[(random_word[i]) - 'a']++;
    }

    int freq2[26]={0};
    for(int i=0 ; i<strlen(anagram) ; i++){
        freq2[anagram[i] - 'a']++;
    }

    for(int i=0 ; i<26 ; i++){
        if(freq1[i] != freq2[i]){
            printf("Not an Anagram Word ");
            return 0;
        }
    }

    printf("It is an Anagram Word");

    return 0;
}