#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,a[105],b[105];
	bool tick_b[105],tick_a[105],kt;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d",&n);
		for (int i=0;i<n;i++)
			{
				scanf("%d",a+i);
				scanf("%d",b+i);
			}
		for (int i=0;i<n;i++)
			{
				for (int j=0;j<n;j++)
				{
					if(b[i]==a[j]&&tick_a[j]==false&&tick_b[i]==false){tick_a[j]=true;tick_b[i]=true;}
				}
			}
		for (int i=0;i<n;i++)
			{
				if (!tick_a[i]) a[i]++;
			}
		for (int i=0;i<n;i++)
			{
				for (int j=0;j<n;j++)
				{
					if(a[i]==b[j]&&tick_a[i]==false&&tick_b[j]==false) {tick_a[i]=true;tick_b[j]=true;}
				}
			}
			kt=true;
		for (int i=0;i<n;i++)
			{
				if (tick_a[i]==false||tick_b[i]==false) { kt=false; break;}
			}
		if (kt) printf("YES\n");
		else printf("NO\n");
	}
}
