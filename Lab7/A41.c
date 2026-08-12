//41. Write a program to implement a node structure for singly linked list. Read the data in a node, print the node.

#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};

int main(){
    struct node *first;

    first = (struct node *)malloc(sizeof(struct node));

    first->link = NULL;

    printf("Enter number:");
    scanf("%d",&first->info);

    printf("%d",first->info);
    return 0;
}