#include<stdio.h>
#include<iostream>
using namespace std;
int a[8]={0},b[20]={0},c[16]={0},pos[10];
int count=0,n;
int dem=0;
void printResult(){
	dem++;
	for (int i=1;i<=n;i++) {
			printf("%d ",i[pos]);
		}
		printf("\n");
}
void goTo(int col){

	if (col>n){
		printResult();

	} 
	for (int row=1;row<=8;row++) {
		pos[col]=row;
		if(a[row]==0 && b[row+col]==0 && c[row-col+n]==0){
			a[row]=1;
			b[row+col]=1;
			c[row-col+n]=1;
			goTo(col+1);
			a[row]=0;
			b[row+col]=0;
			c[row-col+n]=0;
		}
//			a[row]=0;
//			b[row+col]=0;
//			c[row-col+n]=0;
	}	

}
int main(){
	scanf("%d",&n);
	goTo(1);
	int V[100];
	
	V[-1]=4;
	if(dem==0) printf("Khong tim duoc cau hinh");
	else printf("%d\n",dem);
	cout<<V[-1];
}
