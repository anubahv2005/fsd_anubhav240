#include <stdio.h>
int main(){
    int stack[100], choice=0, top= -1, n;
    printf("enter the number of elements");
    scanf("%d", &n);
     for (int i=0; i<n;i++){
        scanf("%d", &stack[i]);
     }
     printf("entered elements are: ");
     for (int i=0; i<n; i++){
        printf("%d", &stack[i]);

     }
    while (choice != 4){
        printf("enter you choice ");
        switch(choice){
            case 1: 
            push();
            break;
            case 2: 
            pop();
            break;
            case 3:
            display();
            break;
            case 4: 
            exit display;
            break;
            default:
            printf("invalid");
        }
    }
    void push(){
        int value;
        printf("enter the value");
        if (top == n-1){
            printf("overflow");
        }
        else{
        top++;
        stack[top] = value;}

    }

    void pop(){
        if (top == -1){
            printf("stack is empty");
        }
        else{
            printf("%d popped from the stack.\n", stack[top--]);
        }
    }

    void display(){
        if (top== -1){
            printf("stakc is empty");
        }
        else{
            printf("stack element");
            for (int i = top; i>=0; i--){
                printf("%d", stack[i]);
            }
            printf("\n");
        }
    }
    return 0;

}