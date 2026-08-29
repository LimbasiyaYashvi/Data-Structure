// 71. Write a program to implement queue using singly linked list.

#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};

struct node *first = NULL;

void enqueue(int x){
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->info = x;
    newNode->link = NULL;
    if(first == NULL){
        first = newNode;
        return;
    }
    struct node *save;
    save = first;
    while(save->link!=NULL){
        save = save->link;
    }
    save->link = newNode;
}

int dequeue(){
    if(first == NULL){
        printf("Empty List");
        return 0;
    }
    struct node *temp;
    temp=first;
    int x = temp->info;
    first = first->link;
    free(temp);
    return x;
}

void display(){
    if(first == NULL){
        printf("Empty");
        return;
    }
    struct node *save;
    save = first;
    while(save != NULL){
        printf("%d, ",save->info);
        save = save->link;
    }
}

int main(){
    int choice,value;

    while (1){
        printf("\nEnter : \n 1.Enqueue \n 2.Dequeue \n 3.Display \n 4.Exit \n Enter choice : ");
        scanf("%d",&choice);

        switch(choice){
        case 1:
            printf("Enter value : ");
            scanf("%d",&value);
            enqueue(value);
            break;

        case 2:
            printf("\nDequeued = %d\n",dequeue());
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