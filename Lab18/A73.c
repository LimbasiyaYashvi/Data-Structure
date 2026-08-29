// 73. Write a menu driven program to implement following operations on the
// Doubled Ended Queue using an Array
//  Insert at front end, Insert at rear end
//  Delete from front end, Delete from rear end
//  Display all elements of the queue

#include<stdio.h>
#define N 10

int queue[N];
int F = -1;
int R = -1;

void enqueueAtEnd(int x){
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

int dequeueAtFirst(){
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

void enqueueAtFirst(int x){
    if(F == 0){
        printf("Queue overflow\n");
        return;
    }
    if(F == -1){
        F = R = 0;
    }
    else{
        F--;;
    }
    queue[F] = x;
}

int dequeueAtEnd(){
    if(R == -1){
        printf("Queue Underflow");
        return 0;
    }
    int x = queue[R];
    if(F == R){
        F = R = -1;
    }
    else{
        R--;
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
        printf("\nEnter : \n 1.Enqueue At End \n 2.Dequeue At First \n 3.Enqueue At First \n 4.Dequeue At End \n 5.Display \n 6.Exit \n Enter choice : ");
        scanf("%d",&choice);

        switch(choice){
        case 1:
            printf("Enter value : ");
            scanf("%d",&value);
            enqueueAtEnd(value);
            break;

        case 2:
            printf("\nDequeued from First = %d\n",dequeueAtFirst());
            break;

        case 3:
            printf("Enter value : ");
            scanf("%d",&value);
            enqueueAtFirst(value);
            break;

        case 4:
            printf("\nDequeued from End = %d\n",dequeueAtEnd());
            break;

        case 5:
            display();
            break;

        case 6:
            return 0;
        
        default:
            printf("Invalid Choice");
        }
    }
    
}