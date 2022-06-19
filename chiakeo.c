#include<stdio.h>
int n;
void init(int a[],int k){
	for (int i=1;i<=k;i++) a[i]=i;
}
void out(int a[], int k){
	printf("\n%d ",a[1]-1);
	for (int i=1;i<=k-1;i++) printf("%d ",a[i+1]-a[i]-1);
	printf("%d",n-a[k]);
}
int lastconfigure(int a[],int k){
	for(int i=k;i>=1;i--) 
		if(a[i]!=n-k+i) return 1;
	return 0;
}
void next_combination(int a[],int k){
	int i=k;
	while(i>=1 && a[i]==n-k+i) i--;
	a[i]++;
	for(int j=i+1;j<=k;j++)a[j]=a[i]+j-i;
}
void generate(int a[],int k){
	init(a,k);
	out(a,k);
	while(lastconfigure(a,k)){
		next_combination(a,k);
		out(a,k);
	}
}
int main(){
	int k;
	scanf("%d %d",&n,&k);
	int a[100];
	k--;
	n+=k;
	generate(a,k);getch();
}
