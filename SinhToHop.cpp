#include<stdio.h>
#include<iostream>
using namespace std;
int b[100],n;
void init(int a[],int k){
	for (int i=1;i<=k;i++) a[i]=i;
}
int lastConfigure(int a[], int k){
	for (int i=1;i<=k;i++) if (a[i]!=n-k+i) return 1;
	return 0;
}
void printResult(int a[], int k){
	for (int i=1;i<=k;i++) printf("%d ",b[a[i]]);
	printf("\n");
}
void nextConfigure(int a[], int k){
	int i=k;
	while(i>=1 && a[i]==n-k+i)i--;
	a[i]++;
	for (int j=i+1;j<=k;j++) a[j]=a[i]+j-i;
}
void generate(int a[100],int k){
	
	init(a,n); printResult(a,k);
	int stop=lastConfigure(a,k);
	while(stop){
		nextConfigure(a,k);
		printResult(a,k);
		stop=lastConfigure(a,k);
	}
}
int main(){
	int a[100];
	scanf("%d",&n);
	for (int i=1;i<=n;i++) scanf("%d",&b[i]);
	generate(a,4);
}
