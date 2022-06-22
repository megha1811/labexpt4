#include <stdio.h>
#include <stdlib.h>
int stack[100],ch,n,top,x,i;
void push(){
    if(top>=n-1){
        printf("\nSTACK is over flow");
    }
    else{
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop(){
    if(top<=-1){
        printf("\n Stack is under flow");
    }
    else{
        printf("\n The popped element is %d",stack[top]);
        top--;
    }
}
void display(){
    if(top>=0){
        printf("\n The elements in STACK \n");
        printf("%d <---top",stack[top]);
        for(i=top-1; i>=0; i--)
            printf("\n%d",stack[i]);
    }
    else{
        printf("\n The STACK is empty");
    }
}
void main(){
    top=-1;
    printf("Enter the size of STACK:");
    scanf("%d",&n);
    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n 1.PUSH\n 2.POP\n 3.DISPLAY\n 4.EXIT");
    while (1){
        printf("\n Enter the Choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:{
                push();
                break;
            }
            case 2:{
                pop();
                break;
            }
            case 3:{
                display();
                break;
            }
            case 4:{
                printf("\nEXITING...\n");
                exit(0);
            }
            default:{
                printf ("\nPlease Enter a Valid Choice(1/2/3/4)");
            }
        }
    }
}
