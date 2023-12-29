#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct str{
    char name[100];
    int age;
    struct str* next;
}*head = 0, *newnode, *temp;

void push(char *name, int age){
    newnode = (struct str*) malloc(sizeof(struct str));
    // newnode->name = name;  
    strcpy( newnode->name, name);
    newnode->age = age;
    newnode->next = 0;

    if(head == 0){
        printf("inside if\n");
        head = newnode;
    }else{
        printf("inside else\n");
        newnode->next = head;
        head = newnode;
    }
}

void pop(){
    if(head == 0){
        printf("Under Flow\n");
    }else
    head = head->next;
    
}

void peek(){
    printf("Name: %s\nAge: %d\n", head->name, head->age);
}

void display(){
    if(head == 0) printf("The Stack is Empty\n");
    else{
        temp = head;
        while(temp){
            printf("Name: %s\nAge: %d\n------------------\n", temp->name, temp->age);
            temp = temp->next;
        }
    }

}

int main(){

    int choice;
    int t = 1;

    while(t){
        printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\nEnter Your Choice\n");
        scanf("%d", &choice);
        if(choice == 1){
        char *name;int age;
            printf("Enter the Name: ");
            scanf("%s", name);
            printf("Enter Age: ");
            scanf("%d", &age);
            push(name, age);
        }
        else if(choice == 2){
            pop();
        }
        else if(choice == 3){
            peek();
        }
        else if(choice == 4){
            display();
        }
        else if(choice == 5){
            break;
        }
        else{
            printf("Invalid choice!!\n");
        }
    }

  

    return 0;
}