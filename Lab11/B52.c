//52. WAP to split a circular linked list into two halves.

#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};

struct node *first1 = NULL;
struct node *last2 = NULL;
struct node *last1 = NULL;
struct node *first2 = NULL;

void insertAtEnd(int x){
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->info = x;
    if(first1 == NULL){
        newNode->link = newNode;
        first1 = newNode;
        last2 = newNode;
        return;
    }  
    last2->link = newNode;
    newNode->link = first1;
    last2 = newNode;
}

int count(){
    if(first1 == NULL){
        printf("Empty list");
    }
    else{
        struct node *save = first1->link;
        int count = 1;
        while(save != first1){
            save = save->link;
            count++;
        }
        return count;
    }
}

void splitList(){
    struct node *slow = first1;
    struct node *fast = first1;
    int n = count();
    if(n%2==0){
        while(fast->link->link != first1){
            fast = fast->link->link;
            slow = slow->link;
        }
        last1 = slow;
        first2 = slow->link;
        last1->link = first1;
        last2->link = first2;
    }
    else{
        while(fast->link != first1){
            fast = fast->link->link;
            slow = slow->link;
        }
        last1 = slow;
        first2 = slow->link;
        last2->link = first2;
        last1->link = first1;
    }
}

void displayPart1(){
    if(first1 == NULL){
        printf("Empty list");
        return;
    }
    struct node *save = first1->link;

    printf("\nFirst part = ");

    printf("%d, ",first1->info);

    while(save != first1){
        printf("%d, ",save->info);
        save = save->link;
    }   
}

void displayPart2(){
    if(first2 == NULL){
        printf("Empty list");
        return;
    }
    struct node *save = first2->link;

    printf("\nSecond part = ");

    printf("%d, ",first2->info);
    
    while(save != first2){
        printf("%d, ",save->info);
        save = save->link;
    }   
}

int main(){
    int choice,n;
    while(1){
        printf("\n Enter \n 1.Insert in circular list at end \n 2.Split List \n 3.Display Part 1st \n 4.Display Part 2nd \n 5.Exit \n Enter choice :  ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter element : ");
                scanf("%d",&n);
                insertAtEnd(n);
                break;
    
            case 2:
                splitList();
                break;
    
            case 3:
                displayPart1();
                break;

            case 4:
                displayPart2();
                break;

            case 5:
                return 0;
         
            default:
                printf("Invalid Choice");
        }
    }
    return 0;
}