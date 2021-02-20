//taking input in better way and insert at ith position
#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
	int data;
	Node *next;
	Node(int data){
		this->data=data;
		next=NULL;
	}
};
Node* takeinput2(){ //we will use two pointers to optimise our code
	int data;
	cin>>data;
	Node *head=NULL;
	Node *tail=NULL;
	while(data!=-1){
		Node *newNode=new Node(data);
	if(head==NULL){
		head=newNode;
		tail=newNode;
		}
	else{
		tail->next=newNode;
		tail=tail->next;	
	}
	cin>>data;
	}	
	return head;
}
Node* insertNode(Node *head,int i,int data){
	Node *newNode=new Node(data);
	int count=0;
	Node *temp=head;
	if(i==0){
		newNode->next=head;
		head=newNode;
		return head;
	}
	while(count<i-1 and temp!=NULL){
		temp=temp->next;
		count++;
	}
	newNode->next=temp->next;
	temp->next=newNode;
	return head;
}
void print(Node *head){
	Node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}

}
int main(){
	Node  *head=takeinput2();
	print(head);
	int i,data;
		cin>>i>>data;
		head=insertNode(head,i,data);
		cout<<endl;
		print(head);
}