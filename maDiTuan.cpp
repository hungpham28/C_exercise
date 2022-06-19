#include<stdio.h>
#include<iostream>
using namespace std;
int u[]={2,-2,2,-2,1,-1,1,-1};
int v[]={1,1,-1,-1,2,2,-2,-2};
int pos[8][8]={0},count=0,n;
int dem=0;
void printResult(){
	dem++;
	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++){
			if(pos[i][j]<10)
			printf("%d  ",pos[i][j]);
			else printf("%d ",pos[i][j]);
		}
		printf("\n");
	}
}
void goTo(int x,int y){
	count++;
	pos[x][y]=count;
	int x1=x,y1=y;
	if (count==n*n){
		printResult();
		exit(0);
	} 
	for (int i=0;i<8;i++) {
		x1+=u[i];y1+=v[i];
		if(pos[x1][y1]==0 && (x1>=0 && x1<n) && (y1>=0 && y1<n)){
			goTo(x1,y1);
		}
		x1-=u[i];y1-=v[i];
	}	
	count--;
	pos[x][y]=0;
}
int main(){
	scanf("%d",&n);
	goTo(0,0);
	if(dem==0) printf("Khong tim duoc cau hinh");
}
