#include<bits/stdc++.h>
using namespace std;
void print_move_disk(char x, char y)
{
	printf("%c --> %c\n",x,y);
}
void move_tower(int n, char a, char b, char c)
{
	if (n==1) print_move_disk(a,b);
	else{
	move_tower(n-1,a,c,b);
	move_tower(1,a,b,c);
	move_tower(n-1,c,b,a);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	char a,b,c; a='A'; b='B'; c='C';
	move_tower(n,a,c,b);
	return 0;
}
