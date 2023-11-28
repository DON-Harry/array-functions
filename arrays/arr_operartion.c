#include<stdio.h>

void insert(int*);
void print(int*);
void delete(int*);
void shift(int*, int);
static int i = 0;
static int c = 0;

int len = 1;

int main(){
    int arr[100];
    int t = 1, choice;
    

    while(t){
    
        printf("\n1. Insert Element\n");
        printf("2. Delete Element\n");
        printf("3. Print Array\n");
        printf("4. Exit\n");
        printf("Enter Your Choice\n");
        scanf("%d", &choice);
        if(choice == 4) break;

        if(choice == 1){
            insert( arr);
        }else if(choice == 2){
            delete(arr);
        }else if(choice == 3){
            print(arr);
        }
    }
    return 0;
}

void insert(int arr[]){
        if(c >= 1) len++;
        printf("Enter Number\n");
        for( ; i<len; i++){
            scanf("%d", &arr[i]);
        }
        c++;
}

void print(int arr[]) {
    printf("\nLength of Array: %d\n", len);
    printf("Array Elements: ");
    for(int i = 0; i < len; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void delete(int arr[]){
    print(arr);
    printf("Enter Positon of Element to Remove\n");

    int position;
    scanf("%d", &position);
    if(position > len || position <= 0){
        printf("Invalid Input!!!\n");
    }else{
        shift(arr, position);
    }
}

void shift(int arr[], int pos){
    for(int i=pos-1; i < len; i++){
        arr[i] = arr[i+1];
    }
    len--;
    c--;
    i--;
}
