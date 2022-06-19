#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[100005],b[100],max,min,lai,maxs[100005],mins[100005];
	bool lai0;
	scanf("%d",&n);
	max=0;min=1000;
	memset(b,0,sizeof(b));
	for (int i=1; i<=n; i++) 
	{
		scanf("%d",&a[i]);
		b[a[i]]++;
		if (b[a[i]]>1) lai0=true;
	}
	for (int i=1;i<=n;i++) 
	{
		if (a[i]>max) max=a[i];
		if (a[n-i+1]<min) min=a[n-i+1];
		maxs[i]=max;
		mins[n-i+1]=min;
	}
	for (int i=1;i<=n;i++)
	{
		if (maxs[i]-mins[i]>lai) lai=maxs[i]-mins[i];
	}
	if (!lai) 
	{
		if (lai0) printf("%d",0);
		else printf("Lo nang roi!");
	}
	else if(lai) printf("%d",lai);
		else printf("Lo nang roi!");
	return 0;
}

