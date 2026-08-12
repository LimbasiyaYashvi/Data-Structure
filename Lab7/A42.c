//42. Write a menu driven program to implement different operations on the singly linked list. 

#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};

struct node *first = NULL;

void insertAtFirst(int x){
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->info = x;
    newNode->link = first;
    first = newNode;
}

void insertAtEnd(int x){
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

int count(){
    struct node *save;
    save = first;
    int count = 0;
    while(save != 0){
        save = save->link;
        count++;
    }
    return count;
}

void insertAtPosition(int idx,int x){
    int n = count();
    if(idx<0 || idx>n){
        printf("Index out of bound");
        return;
    }
    if(idx == 1){
        insertAtFirst(x);
        return;
    }
    if(idx == n){
        insertAtEnd(x);
        return;
    }
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->info = x;
    struct node *save = first;
    int i=1;
    while(save->link != NULL && i<idx-1){
        save = save->link;
        i++;
    }
    newNode->link = save->link;
    save->link = newNode;
}

void display(){
    if(first == NULL){
        printf("Empty");
        return;
    }
    struct node *save;
    save = first;
    while(save != NULL){
        printf("%d,",save->info);
        save = save->link;
    }
}

void deleteAtFirst(){
    if(first == NULL){
        printf("Empty List");
        return;
    }
    struct node *temp;
    temp=first;
    first = first->link;
    free(temp);
}


void deleteAtEnd(){
    if(first == NULL){
        printf("Empty");
    }
    struct node *save;
    struct node *temp;
    save = first;
    while(save->link->link!=NULL){
        save = save->link;
    }
    temp=save->link;
    save->link = NULL;
    free(temp);
}

void deleteAtPosition(int idx){
    int n = count();
    if(idx<1 || idx>n){
        printf("Index out of bound\n");
        return;
    }
    if(idx == 1){
        deleteAtFirst();
        return;
    }
    if(idx == n){
        deleteAtEnd();
        return;
    }
    struct node *save;
    save = first;
    for(int i=1 ; i<idx-1 ; i++){
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
        printf("\n Enter choice : \n 1.Insert at first \n 2.Insert at end \n 3.Insert at position \n 4.Delete at first \n 5.Delete at end \n 6.Delete at position \n 7.Count nodes \n 8.Display List \n 9.Exit \n Enter choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter value : ");
                scanf("%d",&n);
                insertAtFirst(n);
                break;
    
            case 2:
                printf("Enter value : ");
                scanf("%d",&n);
                insertAtEnd(n);
                break;
    
            case 3:
            printf("Enter index and its value : ");
            scanf("%d%d",&idx,&n);
                insertAtPosition(idx,n);
                break;

            case 4:
                deleteAtFirst();
                break;

            case 5:
                deleteAtEnd();
                break;

            case 6:
                printf("Enter index : ");
                scanf("%d",&idx);
                deleteAtPosition(idx);
                break;

            case 7:
                printf("Number of nodes = %d",count());
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
