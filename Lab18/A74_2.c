// 74_2. WAP to implement Priority Queue using stucture having fields : data and its priority.

#include<stdio.h>
# define N 5

int size = 0;

struct queue{
    int data;
    int prority;
};

struct queue q1[N];

void enqueue(int val, int p){
    if(size == N){
        printf("Overflow\n");
        return;
    }
    q1[size].data = val;
    q1[size].prority = p;
    ++size;
}

void dequeue(){
    int max = 0;
    for(int i=0 ; i<N ; i++){
        if(q1[i].prority > q1[max].prority){
            max = i;
        }
    }
    int x = q1[max].data;
    for(int i=max ; i<size-1 ; i++){
        q1[i] = q1[i+1];
    }
    size--;
    printf("Dequeued with highest priority = %d",x);
}

void display(){
    for(int i=0 ; i<size ; i++){
        printf("%d,",q1[i].data);
    }
}

int main(){
    int choice;
    int val;
    int p;

    while(1){
        printf("\nEnter : \n 1.Enqueue \n 2.Dequeue With Highest Priority  \n 3.Display \n 4.Exit \n Enter choice : ");
        scanf("%d",&choice);

        switch(choice){
        case 1:
            printf("Enter value and its prority : ");
            scanf("%d%d",&val,&p);
            enqueue(val,p);
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
    return 0;
}
