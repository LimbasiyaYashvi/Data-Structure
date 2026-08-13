//43. WAP to check whether 2 singly linked lists are same or not.

#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};

struct node *first1 = NULL;
struct node *first2 = NULL;

void insertAtEnd1(int x){
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->info = x;
    newNode->link = NULL;
    if(first1 == NULL){
        first1 = newNode;
        return;
    }
    struct node *save;
    save=first1;
    while(save->link!=NULL){
        save = save->link;
    }
    save->link = newNode;
}

void insertAtEnd2(int x){
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->info = x;
    newNode->link = NULL;
    if(first2 == NULL){
        first2 = newNode;
        return;
    }
    struct node *save;
    save=first2;
    while(save->link!=NULL){
        save = save->link;
    }
    save->link = newNode;
}

void isListSame(){
    int isSame = 1;
    struct node *save1=first1;
    struct  node *save2=first2;
    
    while(save1!=NULL && save2!=NULL){
        if(save1->info != save2->info){
            isSame = 0;
            break;
        }
        save1 = save1->link;
        save2 = save2->link;
    }
    if(save1!=NULL || save2!=NULL || isSame==0){
        printf("List are Not Same");
    }
    else{
        printf("List are Same");
    }
}

int main(){
    int choice,n;
    while(1){
        printf("\nEnter : \n 1.Insert in list1 \n 2.Insert in list2 \n 3.check if lists are same \n 4.exit \n Enter choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter element : ");
                scanf("%d",&n);
                insertAtEnd1(n);
                break;
    
            case 2:
                printf("Enter element : ");
                scanf("%d",&n);
                insertAtEnd2(n);
                break;
    
            case 3:
                isListSame();
                break;
    
            case 4:
                return 0;
            
            default:
                printf("Invalid Choice");
        }
    }
    return 0;
}