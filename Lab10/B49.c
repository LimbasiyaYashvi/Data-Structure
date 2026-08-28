//49. WAP to perform given operation in the linked list. There exist a Linked List. Add
//a node that contains the GCD of those two nodes between every pair adjacent
//node of Linked List.

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

int gcd(int a, int b){
    while (b != 0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

void insertGCD(){
    struct node *current = first;
    struct node *next = current->link;

    while(next != NULL){
        struct node *newNode = (struct node *)malloc(sizeof(struct node));
        newNode->info = gcd(current->info,next->info);
        current->link = newNode;
        newNode->link = next;
        current = next;
        next = current->link;
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
        printf("\nEnter : \n 1.Insert in list \n 2.Insert GCD \n 3.Display \n 4.exit : \n Enter choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter element : ");
                scanf("%d",&n);
                insertAtEnd(n);
                break;

            case 2:
                insertGCD();
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