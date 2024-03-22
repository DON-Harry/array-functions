#include<stdio.h>
#include<stdbool.h>
// #define N 5
int queue[5];
int front = -1;
int rare = -1;
int c = 0;

void enqueue(int n){
    c++;
    if (c == 1) front++;
    rare++;

    queue[rare] = n;

}

void dequeue(){
    front++;
    if(front > rare) front = rare = -1;
    
}

void display(){
    if(front != -1){
        for(int i = front; i < rare+1; i++)
            printf("%d ", queue[i]);
    }
}


int main(){

    int choice, n;
    while(true){
        printf("1. Enqueue\n2. Dequeue\n3. display\n4. Exit\nEnter your choicen\n");
        scanf("%d", &choice);
        if(choice == 1){
            if(rare > 5){
                printf("Queue is Full\n");
                continue;
            }
            printf("Inter Number to Add to Queue: ");
            scanf("%d", &n);
            enqueue(n);
        }else if(choice == 2){
            dequeue();
            if(front == -1 && rare == -1) printf("underflow\n");
        }else if(choice == 3){
            display();
            printf("\n");
        }else if(choice == 4){
            break;
        }else{
            printf("Invalid Choice\n");
        }
    }

    return 0;
}