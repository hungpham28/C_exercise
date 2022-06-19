#include<stdio.h>
#include<math.h>

int a[100];
const int nt[10]={2,3,5,7,11,13,17,19,23,29};
void sol(int x)
{
	int i=2;
	int limit=sqrt(x);
	while (x!=1 && i<=limit)
	{
		while (x%i==0) x/=i,a[i]++;
		i++;
	}
	if (x>1) a[x]++;
}
int compact(int x)
{
	for (int i=0;i<10;i++)
	{
		while (x!=1 && x%nt[i]==0 && a[nt[i]]!=0) x/=nt[i],a[nt[i]]--;
		if (x==1) return x;
	}
	return x;
}
int main()
{
	int n,k;
	long long result;
	scanf("%d%d",&k,&n);
	k= k>n-k ? k : n-k ;
	for (int i=1;i<=n-k;i++) sol(i);
	for (int i=k+1;i<=n;i++) result*=compact(i);
	printf("%lld",result);
}
