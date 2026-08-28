// 48. WAP to swap Kth node from beginning with Kth node from end in a singly linked list.

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
    struct node *save = first;
    while(save->link != NULL){
        save = save->link;
    }
    save->link = newNode;
}

int count(){
    struct node *save = first;
    int count=0;
    while(save != NULL){
        count++;
        save = save->link;
    }
    return count;
}

void kthSwap(int idx){
    int n = count();
    if(idx<1 || idx>n){
        printf("Index out of bound");
        return;
    }
    struct node *save1 = first;
    struct node *save2 = first;
    // struct node *successor;
    for(int i=1 ; i<idx ; i++){
        save1 = save1->link;
    }
    // successor = save1->link->link;
    for(int i=1 ; i<n-idx+1 ; i++){
        save2 = save2->link;
    }
    int temp = save1->info;
    save1->info = save2->info;
    save2->info = temp;
}

void display(){
    if(first == NULL){
        printf("Empty");
        return;
    }
    struct node *save = first;
    while(save != NULL){
        printf("%d,",save->info);
        save = save->link;
    }
}

int main(){
    int choice,n;
    while(1){
        printf("\nEnter : \n 1.Insert in list \n 2.swap kth node \n 3.Display \n 4.exit \n Enter choice :  ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter element : ");
                scanf("%d",&n);
                insertAtEnd(n);
                break;
    
            case 2:
                printf("Enter index : ");
                scanf("%d",&n);
                kthSwap(n);
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