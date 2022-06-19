#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l,r,del_c,del,t,n,min_del;
	char s[100000];
	cin>>t;
	while(t--)
	{
		scanf("%d%s",&n,&s);
		del=-1;min_del=1000000;
		for (char c='a'; c<='z';c++)
		{
			l=0;r=n-1;del_c=0;
			while (l<r)
			{
				if (s[l]==s[r]) {r--;l++;}
				else if (s[l]==c){l++;del_c++;}
				else if (s[r]==c){r--;del_c++;}
				else {del_c=-1;break;}
			}
			if (-1!=del_c&&del_c<min_del) {del=del_c;min_del=del;}
		}
		printf("%d\n", del);
	}
}
