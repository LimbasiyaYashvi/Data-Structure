//44. Write a program to remove the duplicates nodes from sorted Linked List.

#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};

struct node *first = NULL;

void insertAtEnd(int x){
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->info=x;
    newNode->link=NULL;
    if(first==NULL){
        first=newNode;
        return;
    }
    struct node *save;
    save=first;
    while(save->link!=NULL){
        save=save->link;
    }
    save->link=newNode;
}

void removeDuplicate(){
    struct node *save;
    struct node *temp;
    save=first;
    while(save->link!=NULL){
        if(save->info == (save->link)->info){
            temp=save->link;
            save->link=(save->link)->link;
            free(temp);
        }
        else{
            save=save->link;
        }
    }
}

void display(){
    if(first == NULL){
        printf("Empty");
        return;
    }
    struct node *save;
    save=first;
    while(save !=  NULL){
        printf("%d,",save->info);
        save = save->link;
    }
}

int main(){
    int choice,n;
    while(1){
        printf("\nEnter \n 1.Insert in list \n 2.Remove Duplicate \n 3.Display \n 4.exit \n Enter choice :  ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter element : ");
                scanf("%d",&n);
                insertAtEnd(n);
                break;

            case 2:
                removeDuplicate();
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