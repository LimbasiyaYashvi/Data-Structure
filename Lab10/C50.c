// 50. Write a program to swap two consecutive nodes in the linked list. Don’t change
// the values of nodes, implement by changing the link of the nodes.
//  Input: 1 → 2 → 3 → 4 → 5 → 6 → 7 → 8
//  Output: 2 → 1 → 4 → 3 → 6 → 5 → 8 → 7

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

void swapNodes(){
    struct node *prev = first;
    struct node *current = first->link;
    first = current;

    while(1){
        struct node *nxt = current->link;
        current->link = prev;
        if(nxt == NULL || nxt->link == NULL){
            prev->link = nxt;
            break;
        }
        prev->link = nxt->link;
        prev = nxt;
        current = prev->link;
    }
    
}

void display(){
    if(first == NULL){
        printf("Empty");
        return;
    }
    struct node *save = first;
    while(save != NULL){
        printf("%d, ",save->info);
        save = save->link;
    }
}

int main(){
    int choice,n;
    while(1){
        printf("\nEnter : \n 1.Insert in list \n 2.Swap Consecutive Nodes \n 3.Display \n 4.Exit \n Enter choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter element : ");
                scanf("%d",&n);
                insertAtEnd(n);
                break;

            case 2:
                swapNodes();
                break;

            case 3:
                display();
                break;

            case 4:
                return 0;
                break;
            
            default:
                printf("Invalid Choice");
        }
    }
    return 0;
}