#include<stdio.h>
#define N 5
// int N = 5;
int top = -1;
int stack[N];

void push(int num){
    
        top++;
        stack[top] = num;
    
}

void pop(){
    if(top == -1) printf("The Stack is Empty\n");
    else{
        printf("The Poped Item is %d\n", stack[top--]);
    }
}

void peek(){
    if(top == -1) printf("The Stack is Empty\n");
    else{
        printf("%d\n", stack[top]);
    }
}

void display(){

    for(int i = top; i >= 0; i--){
        printf("%d ", stack[i]);
    }
}

int main(){
    int choice;
    int num, t = 1;
    // printf("%ld", sizeof(stack));
    while(t){
        printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\nEnter Your Choice\n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                if(top > N) printf("Overflow!\n");
                else{
                    printf("Enter Number\n");
                    scanf("%d", &num);
                    push(num);
                }
                break;
            
            case 2:
                pop();
                break;
            
            case 3:
                peek();
                break;

            case 4:
                display();
                printf("\n");
                break;
            case 5:
                t = 0;
                break;
            default:
                printf("Invalid Choice\n");
                break;
        }
    }

    return 0;
}