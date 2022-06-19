#include<stdio.h>

int main(){
	int n,A[20];
	printf("Nhap n=");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		printf("Nhap a%d=",i);
		scanf("%d",&A[i]);
	}
	int kt=1;
	for (int i=1;i<=n/2;i++){
		if(A[i]!=A[n-i+1]){
			kt=0;break;
		}
	}
	if(kt) printf("Doi xung\n");
	else printf("Khong doi xung\n");
	int x;
	printf("Nhap x=");
	scanf("%d",&x);
	int dem=0;
    for(int i=1; i<=n; i++) {
        if(A[i] == x) {
            for(int j=i; j<n; j++) A[j] = A[j+1];
            n--;i--;
		}
    }
    for(int i=1; i<=n; i++) printf("%d ",A[i]);
}
