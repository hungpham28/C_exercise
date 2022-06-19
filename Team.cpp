#include<bits/stdc++.h>
using namespace std;
int main()
{
	int nsol,s,n,a[1005];
	scanf("%d",&n);
	while (n--)
	{
		s=0;
		for (int i=0; i<3; i++) {cin>>a[i]; s+=a[i];}
		if (s>1) nsol++;
	}
	printf("%d",nsol);
}
