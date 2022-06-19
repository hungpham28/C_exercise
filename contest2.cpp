#include<bits/stdc++.h>
#define N 200005
using namespace std;
struct building{
	long long time=0;int th=0;
};
building a[N];
int t,n,cdnate[N],k;
long long sum,cd;
bool cmp (building a, building b){
if (a.time>b.time) return true;
return false;
}
int main()
{	
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for (int i=1; i<=n; i++) 
		{
			scanf("%d",&a[i].time);
			a[i].th=i;
		}
		sort(a+1,a+n+1,cmp);
		cd=1;k=1;sum=0;
		while (k<=n)
		{
			cdnate[a[k].th]=cd;
			sum+=cd*a[k].time;
			if (k+1<=n)
			cdnate[a[k+1].th]=-cd,
			sum+=cd*a[k+1].time;
			k+=2;
			cd++;
		}
		printf("%lld\n0 ",2*sum);
		for (int i=1; i<n; i++) printf("%d ",cdnate[i]);
		printf("%d\n",cdnate[n]);
	}
	return 0;
}

