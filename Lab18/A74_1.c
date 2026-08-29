// 74_1. WAP to implement Priority Queue (simple).

#include<stdio.h>
#define N 5

int pq[N];
int size = 0;

void enqueue(int x){
    if(size == N){
        printf("Queue Overflow");
        return;
    }
    pq[size++] = x;
}

void dequeue(){
    int max = 0;
    for(int i=0 ; i<N ; i++){
        if(pq[i] > pq[max]){
            max = i;
        }
    }
    int x = pq[max];
    for(int i=max ; i<size-1 ; i++){
        pq[i] = pq[i+1];
    }
    size--;
    printf("Dequeued with highest priority = %d",x);
}

void display(){
    for(int i=0 ; i<size ; i++){
        printf("%d, ",pq[i]);
    }
}

int main(){
    int choice,value;

    while (1){
        printf("\nEnter : \n 1.Enqueue \n 2.Dequeue With Highest Priority  \n 3.Display \n 4.Exit \n Enter choice : ");
        scanf("%d",&choice);

        switch(choice){
        case 1:
            printf("Enter value : ");
            scanf("%d",&value);
            enqueue(value);
            break;

        case 2:
            dequeue();
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
    
}