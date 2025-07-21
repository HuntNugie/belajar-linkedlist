#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};

void print(Node* head){
	Node* current = head;
	while(current != NULL){
		cout<<current->data<<"->";
		current = current->next;
	}
	cout<<"NULL"<<endl;
}
int main(){
	Node* head = new Node();
	Node* second = new Node();
	Node* three = new Node();
	
	head->data = 99;
	head->next = second;
	
	second->data = 30;
	second->next = three;
	
	three->data = 27;
	three->next = NULL;
	
	print(head);
}
