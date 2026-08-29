// 70. Write a menu driven program to implement following operations on the Queue using an Array
//  ENQUEUE
//  DEQUEUE
//  DISPLAY

#include<stdio.h>
#define N 10

int queue[N];
int F = -1;
int R = -1;

void enqueue(int x){
    if(R >= N-1){
        printf("Queue Overflow");
        return;
    }
    queue[++R] = x;

    if(F == -1){
        F = 0;
        return;
    }

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
    }
    else{
        F++;
    }
    return x;

}

void display(){
    if(F == -1){
        printf("Queue UnderFlow");
        return;
    }
    for(int i=F ; i<=R ; i++){
        printf("%d, ",queue[i]);
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
    
}