// 53. Write a program to perform addition of two polynomial equations using appropriate data structure.

#include<stdio.h>
#include<stdlib.h>

struct node{
    int coff;
    int expo;
    struct node *link;
};

struct node *createNode(int coeff, int expo){
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->coff = coeff;
    newNode->expo = expo;
    newNode->link = NULL;
    return newNode;
}

void insertTerm(struct node **poly, int coeff, int expo){
    struct node *newNode = createNode(coeff, expo);

    if(*poly == NULL){
        *poly = newNode;
        return;
    }

    struct node *save = *poly;
    while(save->link != NULL){
        save = save->link;
    }

    save->link = newNode;
}

void insertPolynomial(struct node **poly){
    int n,coeff,expo;
    printf("\nEnter number of terms : ");
    scanf("%d",&n);

    for(int i=0 ; i<n ; i++){
        printf("Enter coefficient and exponent : ");
        scanf("%d%d",&coeff,&expo);
        insertTerm(poly, coeff, expo);
    }

}

struct node *addPolynomials(struct node *poly1, struct node *poly2){
    struct node *result = NULL;
    struct node *p1 = poly1, *p2 = poly2;

    while(p1 != NULL && p2 != NULL){

        if(p1->expo == p2->expo){
            int sum = p1->coff + p2->coff;
            if(sum != 0){
                insertTerm(&result, sum, p1->expo);
            }
            p1 = p1->link;
            p2 = p2->link;
        }
        else if(p1->expo > p2->expo){
            insertTerm(&result, p1->coff, p1->expo);
            p1 = p1->link;
        }
        else{
            insertTerm(&result, p2->coff, p2->expo);
            p2 = p2->link;
        }

    }

    while(p1 != NULL){
        insertTerm(&result, p1->coff, p1->expo);
        p1 = p1->link;
    }

    while(p2 != NULL){
        insertTerm(&result, p2->coff, p2->expo);
        p2 = p2->link;
    }

    return result;

}

void display(struct node *poly){
    if(poly == NULL){
        printf("Polynomial not Found ");
        return;
    }

    while(poly != NULL){
        printf("%dx^%d",poly->coff,poly->expo);
        poly = poly->link;

        if(poly != NULL){
            printf(" + ");
        }
    }
}


int main(){
    struct node *poly1 = NULL, *poly2 = NULL, *result = NULL;
    
    printf("\n--Enter Polynomial 1--\n");
    insertPolynomial(&poly1);

    printf("\n--Enter Polynomial 2--\n");
    insertPolynomial(&poly2);

    printf("\n ===Polynomial 1===\n");
    display(poly1);

    printf("\n\n ===Polynomial 2===\n");
    display(poly2);

    result = addPolynomials(poly1, poly2);

    printf("\n\n ===Sum of polynomials===\n");
    display(result);
    
    return 0;
}