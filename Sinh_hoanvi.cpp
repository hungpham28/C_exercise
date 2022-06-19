#include<bits/stdc++.h>

using namespace std;
int n;
int timem;
int b[25];
void init(int b[],int n){
	for (int i=1;i<=n;i++) b[i]=i;
}
void print(int b[],int n){
	for (int i=1;i<=n;i++){
		printf("%d",b[i]);
	}
	printf("\n");
}
int isLast(int b[],int n){
	for (int i=1;i<=n-1;i++) {
	timem++;if (b[i]<b[i+1]) return 0;}
	return 1;
}
void swap(int* a,int* b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
void gen(int b[],int n){
	int i=n-1;
	while(b[i]>b[i+1]) i--,timem++;
	
    int k=n;
    
	while(b[i]>b[k])k--,timem++;
	
	swap(&b[i],&b[k]);
	
	int l=i+1; int r=n;
	while(l<r){
		swap(&b[l],&b[r]);
		l++;r--;
		timem++;
	} 

}
void method(){
	init(b,n);
	print(b,n);
	int stop=isLast(b,n);
	while (stop==0){
		gen(b,n);
		print(b,n);
		stop=isLast(b,n);
		timem++;
	}
}
int main(){
	printf("NHAP So phan tu hoan vi la:");
	timem=0;
	scanf("%d",&n);
	method();
	printf("%d",timem);
	return 0;
}
