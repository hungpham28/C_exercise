#include<stdio.h>
#include<iostream>
using namespace std;
struct NODE{
	int value;
	struct NODE *next;
};
typedef struct NODE node;
struct LinkedList{
	node *head;
	node *tail;
	int length=0;
};
typedef struct LinkedList LinkedList;
void InitList(LinkedList& list){
	list.head=NULL;
	list.tail=NULL;
}
node* CreateNode(int data){
	node* ob=new node;
	ob->value=data;
	ob->next=NULL;
	return ob;
}
void push_back(LinkedList& list,node* node){
	if (list.head==NULL){
		list.head=node;
		list.tail=node;
	}
	else{
		node->next=list.tail;
		list.tail=node;
	}
	list.length++;
}
void add_head(LinkedList& list,node* node){
	if (list.head==NULL){
		list.head=node;
		list.tail=node;
	}
	else{
		list.head->next=node;
		list.head=node;
	}
	list.length++;
}
void remove(LinkedList& list,int index){
	if(list.head!=NULL){
		
		node* pointer=list.tail;
		for (int i=2;i<index;i++) pointer=pointer->next;
		
		if (index!=1 && index!=list.length){	
			node* rnode=pointer->next;
			pointer->next=(pointer->next)->next;
			delete rnode;
		}
		
		if (index==1) {
			node* rnode=list.tail;
			list.tail=list.tail->next;
			delete rnode;
		}
		if(index==list.length) {
			node* rnode=list.head;
			list.head=pointer;
			list.head->next=NULL;
			delete rnode;
		}
		list.length--;
	}
}
void print_list(LinkedList& list){
	if(list.head!=NULL){
		for (node* ob=list.tail;ob->next;ob=ob->next) cout<<ob->value<<" ";
		cout<<list.head->value<<"\n";
	}

}
int main(){
	LinkedList list;
	InitList(list);
	push_back(list,CreateNode(5));
	push_back(list,CreateNode(57));
	push_back(list,CreateNode(8));
	add_head(list,CreateNode(100));
	cout<<list.length<<"\n";
	print_list(list);
	remove(list,1);
	print_list(list);
}
