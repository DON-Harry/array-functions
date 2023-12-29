#include<stdio.h>
#include<stdlib.h>

struct calendar{
    char day[15];
    int date;
    char activity[250];
}calendar;
struct calendar c[7];

void creat(){
    int t = 1;
    for(int i = 0; i < 7; i++){
        // c[i] = (struct calendar*) malloc(sizeof(struct calendar));
        printf("Enter Day: ");
        scanf("%s", c[i].day);
        while(t){
            printf("Enter Date (1 - 31): ");
            scanf("%d", &c[i].date);
            if(c[i].date > 31 || c[i].date < 1){
                printf("Invalid Date!!\n");
            }else break;
        }
        printf("Enter Activity: ");
        scanf("%s", c[i].activity);//You can't give spaced input. Need to be updated.
        // fgets(c[i].activity, 250, stdin);
    }
}

void read(int date){
    if(date > 31 || date < 1) printf("invalid Date\n");
    else{
        int i;
        for(i = 0; i < 7; i++){
            if(c[i].date == date){
                printf("Day: %s\n", c[i].day);
                printf("Activity: %s\n", c[i].activity);
                break;
            }
        }
        if(i == 7){
            printf("Date is not existing\n");
        }
    }
}

void display(){
    for(int i = 0; i < 7; i++){
        printf("Day: %s\nDate: %d\nActivity: %s\n--------------------------------------\n", c[i].day,c[i].date,c[i].activity);
    }
}

int main(){
    creat();
    int t = 1, choice, date;
    while(t){
        printf("1. read\n2. Display\n3. exit\nEnter Your Choice\n");
        scanf("%d", &choice);
        if(choice == 1){
            printf("Enter Date: ");
            scanf("%d", &date);
            read(date);
        }else if(choice == 2){
            display();
        }else if(choice == 3) break;
        else printf("Invalid choice\n");
    }

    return 0;
}