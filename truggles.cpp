#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,d,s;
	scanf("%d%d%d%d",&n,&k,&d,&s);
	double result=(n*d-s*k)*1.0/(n-k);
	if (0<=result && result<=100) printf("%0.7llf",result);
	else printf("impossible");
}
