#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int val;
	Node* next;
	Node():val(0),next(NULL){}
	Node(int x) : val(x), next(NULL) {}
};

void printl(Node* head){
	Node* ptr = head;
	while(ptr!=NULL){
		cout << ptr->val << endl;
		ptr=ptr->next;
	}
}

Node* insert(Node* head,int value){
	Node* n = new Node();
	n->val=value;
	if(head==NULL){
		head=n;
		//cout << head->val << endl;
	}
	else{
		Node* ptr = head;
		while(ptr->next!=NULL){
			ptr=ptr->next;
		}
		Node* temp = new Node(value);
		ptr->next=temp;
	}
	return head;
}

int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
    // Method 1
    Node* test1 = new Node(6);

    //Method 2;
    Node* test2 = new Node();
    test2->val=1;
    test2->next=NULL;
    
    //Method 3;
    Node ptrr;
    ptrr.val=5;
    ptrr.next=NULL;
    

    Node* head = NULL;
    head = insert(head,5);
    head = insert(head,5);
    head = insert(head,5);
    head = insert(head,5);
    //insert(head,6);
    //insert(head,6);
    //insert(head,6);
    //insert(head,7);
    printl(head);

}