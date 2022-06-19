#include<bits/stdc++.h>
using namespace std;
int a[2005][2005];
inline int min(int a,int b) {return a>b?b:a;}
int main()
{
	int n,q,x,k,t,tran_a[2005];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for (int i=0; i<n; i++) scanf("%d", &a[0][i]);
		scanf("%d",&q);
		for (int j=1;j<=n;j++)
		{
			memset(tran_a,0,sizeof(tran_a));
			for (int i=0; i<n; i++) tran_a[a[j-1][i]]++;
			for (int i=0; i<n; i++) a[j][i]=tran_a[a[j-1][i]];
		}
		while(q--)
		{
			scanf("%d%d",&x,&k);
			printf("%d\n",a[min(n,k)][x-1]);
		}
	}
	return 0;
}
