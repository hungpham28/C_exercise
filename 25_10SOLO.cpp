#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,a[2001],value[2001],x_k[100001][3],n,q;
	scanf("%d",t);
	while(t--)
	{
		scanf("%d",&n);
		for (int j=0; j<n; j++) scanf("%d",&a[j]);
		scanf("%d",&q);
		for (int i=1; i<=q; i++)
		{
			scanf("%d%d",&x_k[i][1],&x_k[i][2]);
			x_k[i][0]=i;
		}
		sort(x_k[2]+2,x_k[2]+2);
	}
}
