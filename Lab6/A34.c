// 34. WAP to allocate and de-allocate memory for int, char and float variable at runtime.

#include<stdio.h>
#include<stdlib.h>
int main(){
    int *a = (int *)malloc(sizeof(int));
    char *b = (char *)malloc(sizeof(char));
    float *c = (float *)malloc(sizeof(float));

    if(a && b && c){
        *a=10;
        *b='y';
        *c=10.11;
    }
    else{
        printf("Memory allocation failed");
        return;
    }

    printf("%d\n",*a);
    printf("%c\n",*b);
    printf("%f\n",*c);

    free(a);
    free(b);
    free(c);

    return 0;
}