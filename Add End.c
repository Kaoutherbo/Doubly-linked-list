#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node*next;
	struct node*prev;
}Node;

Node* fillEmpty(int userval){
	Node*newNode=(Node*)malloc(sizeof(Node));
	newNode->data=userval;
	newNode->next=NULL;
	newNode->prev=NULL;
	return newNode;
}

Node* AddEnd(Node *head,int userval){
	if(head==NULL){
		head=fillEmpty(userval);
	}else{
	Node*newNode=(Node*)malloc(sizeof(Node));
	newNode->data=userval;
	newNode->next=NULL;
	Node *temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=newNode;
	newNode->prev=temp;

	}
	return head;
}

void DisplayList(Node *head){
	Node *temp=head;
	while(temp!=NULL){
		printf("%d  ",temp->data);
		temp=temp->next;
	}
}
//Driver code
int main(){
	Node*list=NULL;
	int n,num;
	printf("How many nodes you want ");
	scanf("%d",&n);
	for(size_t i=0;i<n;i++){
		printf("Enter a number ");
		scanf("%d",&num);
		list=AddEnd(list,num);
	}
	printf("\n The list is :\n");
	DisplayList(list);
	
	return 0;
}