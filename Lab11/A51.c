// 51. Write a menu driven program to implement different operations on the circular linked list.

#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};

struct node *first = NULL;
struct node *last = NULL;

void insertAtFirst(int x){
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->info = x;
    if(first == NULL){
        newNode->link = newNode;
        first = newNode;
        last = newNode;
        return;
    }
    newNode->link = first;
    last->link = newNode;
    first = newNode;
}

void insertAtEnd(int x){
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->info = x;
    if(first == NULL){
        newNode->link = newNode;
        first = newNode;
        last = newNode;
        return;
    }  
    last->link = newNode;
    newNode->link = first;
    last = newNode;
}

int count(){
    if(first == NULL){
        printf("Empty list");
    }
    else{
        struct node *save = first->link;
        int count = 1;
        while(save != first){
            save = save->link;
            count++;
        }
        return count;
    }
}

void insertAtPosition(int idx,int x){
    int n = count();
    if(idx<0 || idx>n){
        printf("No such index");
        return;
    }
    if(idx==1){
        insertAtFirst(x);
        return;
    }
    if(idx==n){
        insertAtEnd(x);
        return;
    }
    struct node *newNode; 
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->info = x;
    struct node *save = first;
    
    for(int i=1 ; i<idx-1 ; i++){
        save = save->link;
    }
    newNode->link = save->link;
    save->link = newNode;
}


void display(){
    if(first == NULL){
        printf("Empty list");
        return;
    }
    struct node *save = first->link;
    printf("%d, ",first->info);
    while(save != first){
        printf("%d, ",save->info);
        save = save->link;
    }   
}

void deleteAtFirst(){
    if(first == NULL){
        printf("List empty");
        return;
    }
    struct node *temp;
    if(first == last){
        temp = first;
        first = NULL;
        last = NULL;
        free(temp);
        return;
    }
    temp = first;
    first = first->link;
    last->link = first;
    free(temp);
}

void deleteAtEnd(){
    if(first == NULL){
        printf("List empty");
        return;
    }
    struct node *temp;
    if(first == last){
        temp = first;
        first = NULL;
        last = NULL;
        free(temp);
        return;
    }
    struct node *save;
    save=first;
    while(save->link->link != first){
        save = save->link;
    }
    temp = save->link;
    last = save;
    last->link = first;
    free(temp);
}

void deleteAtPosition(int idx){
    if(first == NULL){
        printf("Empty list");
        return;
    }
    int n = count();
    if(idx<0 || idx>n){
        printf("Index not found");
        return;
    }
    if(first == last || idx==1){
        deleteAtFirst();
        return;
    }
    if(idx == n){
        deleteAtEnd();
        return;
    }
    struct node *save;
    save=first;
    for(int i=1 ; i<idx-1; i++){
        save = save->link;
    }
    struct node *temp;
    temp = save->link;
    save->link = save->link->link;
    free(temp);
}

int main(){
    int choice,n,idx;
    while(1){
        printf("\nEnter \n 1.Insert in circular list at end \n 2.Insert in circular list at first \n 3.Insert in circular list at specifice position \n 4.Delete in circular list at first \n 5.Delete in circular list at end \n 6.Delete in circular list at specifice position \n 7.Count all nodes \n 8.Display list \n 9.Exit \nEnter choice :  ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter element : ");
                scanf("%d",&n);
                insertAtEnd(n);
                break;
    
            case 2:
                printf("Enter element : ");
                scanf("%d",&n);
                insertAtFirst(n);
                break;

            case 3:
                printf("Enter element : ");
                scanf("%d",&n);
                printf("Enter index : ");
                scanf("%d",&idx);
                insertAtPosition(idx,n);
                break;

            case 4:
                deleteAtFirst();
                break;

            case 5:
                deleteAtEnd();
                break;
    
            case 6:
                printf("Enter index to be deleted : ");
                scanf("%d",&n);
                deleteAtPosition(n);
                break;

            case 7:
                printf("\nTotal node = %d\n",count());
                break;
    
            case 8:
                display();
                break;

            case 9:
                return 0;
         
            default:
                printf("Invalid Choice");
        }
    }
    return 0;
}