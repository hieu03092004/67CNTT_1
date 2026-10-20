#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *next;
	struct node*prev;
};
typedef struct node node;
node* makeNode(int x){
	node*newNode=new node;
	newNode->data=x;
	newNode->next=NULL;
	newNode->prev=NULL;
	return newNode;
}
void duyet(node *head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
}
void pushFront(node*&head,int x){
	node*newNode=makeNode(x);
	newNode->next=head;
	if(head!=NULL)
		head->prev=newNode;
	head=newNode;
}
void pushBack(node*&head,int x){
	node *newNode=makeNode(x);
	if(head==NULL)
		head=newNode;
	else{
		node*tmp=head;
		while(tmp->next!=NULL){
			tmp=tmp->next;
		}
		tmp->next=newNode;
		newNode->prev=tmp;
	}
}
bool check(node*head){
	if(head->next==NULL)
		return true;
	node*left=head;
	node*right=head->next;
	while(right!=NULL){
		if(right->data<left->data)
			return false;
		left=right;
		right=right->next;
	}
	return true;
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	node*head=NULL;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		pushBack(head,x);
	}
	duyet(head);
}