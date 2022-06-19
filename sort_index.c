#include <stdio.h>

int main(){
    int n,x;
    int a[10000];
	scanf("%d",&n);
	for (int i=0;i<=2000;i++) a[i]=0;
    for (int i=0;i<n;i++)
    {
    	scanf("%d",&x);
    	a[x+1000]++;
	}
	for (int i=0;i<=2000;i++){
		if (a[i]>0)
			for (int j=0;j<a[i];j++) printf("%d ",i-1000);
	}
}
