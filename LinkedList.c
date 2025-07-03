#include<stdio.h>
#include<stdlib.h>
void main() {
	struct Node {
		int data;
		struct Node *next;
	};

	struct Node *head=NULL;
	struct Node *temp=NULL;
	int choice=1;
	int count=0;
	while(choice==1) {
		struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
		printf("enter value for node\n");
		scanf("%d",&newNode->data);
		newNode->next=NULL;
		if(head==NULL) {
			head=temp=newNode;
		}
		else {
			temp->next=newNode;
			temp=newNode;
		}
		printf("Do you want to continue press 1\n");
		scanf("%d",&choice);
	}
	temp=head;
	while(temp!=NULL) {
		printf("%d ",temp->data);
		temp=temp->next;
		count++;
	}
	printf("\nlength of linked list is=%d",count);
}