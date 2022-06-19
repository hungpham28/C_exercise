#include<stdio.h>
long long fibo(long long n)
{
	long long f1=1,f2=1;
	for (int i=3;i<=n;i++)
	{
		f2=f1+f2;
		f1=f2-f1;
	}
	return f2;
}
int main()
{
	long long n;
	scanf("%lld",&n);
	printf("%lld",fibo(n));
}
