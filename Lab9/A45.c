//45. Write a program to copy a linked list.

#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};

struct node *first = NULL;
struct node *copy = NULL;

void insertAtEnd1(int x){
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->info = x;
    newNode->link = NULL;
    if(first == NULL){
        first = newNode;
        return;
    }
    struct node *save = first;
    while(save->link!=NULL){
        save = save->link;
    }
    save->link = newNode;
}

void insertAtEnd2(int x){
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->info = x;
    newNode->link = NULL;
    if(copy == NULL){
        copy = newNode;
        return;
    }
    struct node *save = copy;
    while(save->link!=NULL){
        save = save->link;
    }
    save->link = newNode;
}

int copyList(){
    struct node *save = first;
    while(save!=NULL){
        insertAtEnd2(save->info);
        save=save->link;
    }
}

void display(){
    if(copy == NULL){
        printf("Empty");
        return;
    }
    struct node *save;
    save = copy;
    while(save!=NULL){
        printf("%d,",save->info);
        save = save->link;
    }
}

int main(){
    int choice,n;
    while(1){
        printf("\nEnter : \n 1.Insert in list \n 2.copy list \n 3.Display \n 4.exit \n Enter choice :  ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter element : ");
                scanf("%d",&n);
                insertAtEnd1(n);
                break;
    
            case 2:
                copyList();
                break;

            case 3:
                display();
                break;
    
            case 4:
                return 0;
            
            default:
                printf("Invalid Choice");
        }
    }
    return 0;
}