// 40. WAP to define a C structure named Student (roll_no, name, branch and batch_no) and also to access the structure members using Pointer.

#include<stdio.h>

struct student{
    int roll_no,batch_no;
    char branch[10],name[10];
};

int main(){
    struct student *ptr;

    printf("Enter roll number:");
    scanf("%d",&ptr->roll_no);

    printf("Enter batch number:");
    scanf("%d",&ptr->batch_no);

    printf("Enter name:");
    scanf("%d",&ptr->name);

    printf("Enter branch:");
    scanf("%d",&ptr->branch);

    printf("%d",ptr->roll_no);
    printf("%d",ptr->batch_no);
    printf("%d",ptr->name);
    printf("%d",ptr->branch);

    return 0;
}