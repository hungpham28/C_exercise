#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t,a,k;
	bool result;
	vector<int> vec;
	scanf("%d",&t);
	while (t--)
		{
			scanf("%d",&n);
			for (int i=1; i<=n; i++)	
			{
				scanf("%d",&a);
				vec.push_back(a);
			}
			k=n;
			result=1;
			while (vec.size()>0)
			{
				k--;
				if (vec[k]%(k+2)) { 
				vec.erase(vec.begin()+k,vec.begin()+k+1); 
				k=vec.size();
				}
				if (k==0 && vec.size()!=0) {result=0; break;}				
			}
			if (result) printf("YES\n");
			else printf("NO\n");
		}
	return 0;
}

