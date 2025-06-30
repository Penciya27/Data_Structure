#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *head=NULL;

void createNode(int value){
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=head;
    head=newNode;
}

void delete(){
    struct Node *temp=head;
    head=temp->next;
    free(temp);
}

void display(){
    struct Node *temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

int main(){
    int n;
    printf("enter the number of elements of the linked list\n");
    scanf("%d",&n);
    int val;
    printf("enter the values of the linked list\n");
    for(int i=0;i<n;i++){
        scanf("%d",&val);
        createNode(val);
    }
    display();
    delete();
    printf("\n");
    printf("After onetime deletiion\n");
    display();
}