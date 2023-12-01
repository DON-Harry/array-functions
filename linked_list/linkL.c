#include<stdio.h>
#include<stdlib.h>

struct node{
    int num;
    struct node* next;
    struct node* priv;
}*head = 0, *newnode, *temp;

int main(){
    int t = 1, c = 0;
    while(t){
        newnode =(struct node*) malloc(sizeof(struct node));
        printf("Enter number\n");
        scanf("%d", &newnode->num);
        newnode->next = 0;
        newnode->priv = 0;

        if(head == 0){
            head=temp=newnode;
        }else{
            temp->next=newnode;
            newnode->priv = temp;
            temp = newnode;
        }
        printf("TO EXIT PRESS '0'/ TO CONTINUE PRESS '1'\n");
        scanf("%d", &t);
    }

    temp->next = head;
    head->priv = temp;
    printf("\n");
    temp = head;
    int ch = -1;
    t = 1;
    while(ch){
            printf("%d\n", temp->num);
            printf("1. Next->\t2. <-Priv\t3. Exit\n");
            scanf("%d", &ch);
            if(ch == 1) temp = temp->next;
            else if(ch == 2) temp = temp->priv;
            else ch = 0;
    }

    return 0; 
}