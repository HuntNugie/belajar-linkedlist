#include<iostream>
using namespace std;

	struct Node{
		int angka;
		Node* next;
	};

void print(Node* head){
	Node* current = head;
	while(current != NULL){
		cout<<current->angka<<"->";
		current = current->next;
	}
	cout<<"NULL"<<endl;
}
int main(){

	Node* one = new Node();
		Node* two = new Node();
	one->angka = 99;
	one->next = two;
	two->angka = 30;
	two->next = NULL;
	print(one);
}
