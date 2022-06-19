#include<bits/stdc++.h>

using namespace std;
int n;
int b[25];
void init(int b[],int n){
	for (int i=1;i<=n;i++) b[i]=0;
}
void print_bit(int b[],int n){
	for (int i=1;i<=n;i++){
		printf("%d",b[i]);
	}
	printf("\n");
}
int isLast(int b[],int n){
	for (int i=1;i<=n;i++) if (b[i]==0) return 0;
	return 1;
}
void gen(int b[],int n){
	int i=n;
	while(b[i]==1) i--;
    b[i] = 1;

    for (int j = i + 1; j<=n; j++) {
        b[j] = 0;
    }
}
void method(){
	init(b,n);
	print_bit(b,n);
	int stop=isLast(b,n);
	while (stop==0){
		gen(b,n);
		print_bit(b,n);
		stop=isLast(b,n);
	}
}
int main(){
	printf("Nhap do dai day nhi phan:");
	scanf("%d",&n);
	method();
	return 0;
}
