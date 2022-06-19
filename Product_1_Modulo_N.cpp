#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
	while (a!=0 && b!=0)
	{
		a%=b;
		if (a==0) break;
		b%=a;
	}
	return a+b;
}
int main(){
	int n;
	cin>>n;
	vector<int> vec;
	vec.push_back(1);
	int product(1);
	for (int i=2; i<n; i++) if (gcd(i,n)==1) 
		{
			vec.push_back(i);
			product*=i;
			product%=n;
		}
	int len=vec.size();
	if (product!=1) len--;
	printf("%d\n",len);
	for (int i : vec) 
		if (product==1) printf("%d ", i); 
		else if(i==product) continue;
		else printf("%d ",i);
	return 0;
}

