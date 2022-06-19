#include<bits/stdc++.h>
using namespace std;
const int botton[3]={5,2,1};
int main()
{
	int npress,delta,a,b,t;
	scanf("%d",&t);
	while(t--)
	{
		npress=0;
		scanf("%d%d", &a,&b);
		delta=abs(a-b);
		for (int i=0;i<3;i++){npress+=delta/botton[i]; delta%=botton[i];}
		printf("%d\n",npress);
	}
}
