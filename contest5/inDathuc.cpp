#include <bits/stdc++.h>
using namespace std;

struct node{
    int a,b;
    struct node *next;
    struct node*prev;
};
typedef struct node node;
node* makeNode(int a,int b){
    node*newNode=new node;
    newNode->a=a;
    newNode->b=b;
    newNode->next=NULL;
    newNode->prev=NULL;
    return newNode;
}

void pushBack(node*&head,int a,int b){
    node *newNode=makeNode(a,b);
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

void print(node* head) {
    bool first = true;
    while (head) {
        int a = head->a, b = head->b;

        if (!first && a > 0) 
            cout << "+";

        if (a == -1 && b>0)
            cout << "-";
        else if (a != 1 || b==0) 
            cout << a;

        
        if (b > 0) 
            cout << "x";
        if (b > 1) 
            cout << "^" << b;

        first = false;
        head = head->next;
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    node* head = NULL;
    while (true){
        int a,b;
        cin>>a>>b;
        if(a==0)
            break;
        pushBack(head,a,b);
        
    }
    print(head);
}
