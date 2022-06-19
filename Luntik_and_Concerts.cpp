#include<cstdio>
const int N=100010;
int T,n;
char a[N];
int main()
{


		scanf("%d%s",&n,a+1);
		int ans=-1;
		for(char c='a';c<='z';++c)
		{
			int cnt=0,l=1,r=n;
			while(l<r)
			{
				if(a[l]==a[r]) ++l,--r;
				else
				{
					if(a[l]==c) ++l,++cnt;
					else if(a[r]==c) --r,++cnt;
					else {cnt=1e9;break;}
				}
			}
			if(cnt!=1e9&&(ans==-1||cnt<ans)) ans=cnt;
		}
		printf("%d\n",ans);

	return 0;
}

