//45. Write a program to reverse a linked list.

#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};

struct node *first = NULL;

void insertAtEnd(int x){
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->info = x;
    newNode->link = NULL;
    if(first == NULL){
        first = newNode;
        return;
    }
    struct node *save=first;
    while(save->link!=NULL){
        save = save->link;
    }
    save->link = newNode;
}

void revList(){
    struct node *save = first;
    struct node *prev = NULL;
    struct node *successor;

    while(save!=NULL){
        successor=save->link;
        save->link=prev;
        prev=save;
        save=successor;
    }
    first=prev;
}

void display(){
    if(first == NULL){
        printf("Empty");
        return;
    }
    struct node *save = first;
    while(save!=NULL){
        printf("%d,",save->info);
        save = save->link;
    }
}

int main(){
    int choice,n;
    while(1){
        printf("\nEnter :  \n 1.Insert in list \n 2.Reverse list \n 3.Display \n 4.exit \n Enter choice :  ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter element : ");
                scanf("%d",&n);
                insertAtEnd(n);
                break;
    
            case 2:
                revList();
                break;

            case 3:
                display();
    
            case 4:
                return 0;
            
            default:
                printf("Invalid Choice");
        }
    }
    return 0;
}