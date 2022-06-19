#include<stdio.h>
#include<iostream>
using namespace std;
typedef struct Node node;
typedef struct LinkedList2 list2w;
struct Node{
	int data;
	node* next;
	node* prev;
};
struct LinkedList2{
	node* head;
	node* tail;
	int length=0;
};
void initList(list2w &list){
	list.head=NULL;
	list.tail=NULL;
}
node* CreateNode(int data){
	node* ob=new node;
	ob->data=data;
	ob->next=NULL;
	ob->prev=NULL;
}
void push_back(list2w &list,node* node){
	if(list.head==NULL){
		list.head=node;
		list.tail=node;
	}
	else{
		list.tail->next=node;
		node->prev=list.head;
		list.tail=node;
	}
	list.length++;
}
void push_top(list2w &list,node* node){
	if(list.head==NULL){
		list.head=node;
		list.tail=node;
	}
	else{
		list.head->prev=node;
		node->next=list.head;
		list.head=node;
	}
	list.length++;
}
void print_list(list2w &list){
	if(list.length)
	for (node* ob=list.head;ob;ob=ob->next) cout<<ob->data<<" ";
	else cout<<"Danh sach rong";
	cout<<"\n";
}
int main(){
	list2w list;
	initList(list);
	push_back(list,CreateNode(5));
	push_back(list,CreateNode(7));
	push_back(list,CreateNode(8));
	push_top(list,CreateNode(100));
	print_list(list);

}
