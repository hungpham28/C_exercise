#include<stdio.h>
int n,k;
int A[25];
void xuat() {
	for (int i=1;i<=k;i++) printf("%d ",A[i]);
	printf("\n");
}
void Try(int a) {
    for (int i = A[a-1]+1; i <= n-k+a; i++) {
        A[a]=i;
        if(a==k) xuat();
        else Try(a+1);
    }
}
int main() {
    printf("Tim nCk\nNhap lan luot n, k:");
	scanf("%d %d",&n,&k);
    Try(1);
}
