// 72. Write a menu driven program to implement following operations on a circular queue using an Array
//  Insert
//  Delete
//  Display all elements of the queue

#include<stdio.h>
#define N 5

int queue[N];
int F = -1;
int R = -1;

void enqueue(int x){
    if((R+1)%N == F){
        printf("Queue Overflow");
        return;
    }

    if(F == -1){
        F=0;
    }
    R = (R+1)%N;
    queue[R] = x;
}

int dequeue(){
    int x;
    if(F == -1){
        printf("Queue Underflow");
        return 0;
    }
    x = queue[F];
    if(F == R){
        F = R = -1;
        return x;
    }
    else{
        F = (F+1)%N;
    }
    return x;
}

void display(){
    if(F == -1){
        printf("Queue UnderFlow");
        return;
    }
    if(F <= R){
        for(int i=F ; i<=R ; i++){
            printf("%d,",queue[i]);
        }
    }
    else{
        for(int i=F ; i<N ; i++){
            printf("%d, ",queue[i]);
        }
        for(int i=0 ; i<=R ; i++){
            printf("%d, ",queue[i]);
        }
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
            printf("Dequeue = %d\n",dequeue());
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