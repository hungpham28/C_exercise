
#include<stdio.h>
using namespace std;
struct node{
	int data;
	node *next;
};
struct lists{
	node *phead;
	node *ptail;
};
void init_list(lists &ls)
{
	ls.phead=NULL;
	ls.ptail=NULL;
}
node *init_node(int a)
{
	node *p= new node;
	if (p==NULL)
	{
		cout<<"\ncap phat bo nho khong thanh cong!";
		return NULL;
	}
	p->data=a;
	p->next=NULL;
}
node *add_node_head(lists &ls,node *p)
{
	if (ls.phead==NULL)
	{
		ls.phead=ls.ptail=p;
	}
	else
	{
		p->next=ls.phead;
		ls.phead= p;
	}
}
node *add_node_back(lists &ls, node *p)
{
	if (ls.ptail==NULL)
	{
		ls.phead=ls.ptail=p;
	}
	else
	{
		ls.ptail->next=p;
		ls.ptail=p;
	}
}
void print_list(lists lts)
{
	for (node *i=lts.phead; i!=NULL; i=i->next)
	{
		cout<<i->data<<" ";
	}
}
int main()
{
	lists lt;
	init_list(lt);
	int n;
	cin>>n;
	for (int i=0; i<n; i++)
	{
		if (i%2==1) {
			add_node_head(lt,init_node(i));
		}
	}
	print_list(lt);
	return 0;
}
