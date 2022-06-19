#include<bits/stdc++.h>
using namespace std;
inline int disO(int x, int y) {return x*x+y*y;}
inline int partx(int y) {return y>0 ? 1 : 2;} 
inline int party(int x) {return x>0 ? 1 : 2;}
struct maxpoint
{
	int max_x=0; int max_y=0;
};
inline double dis(int x1, int y1, int x2, int y2) {return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)); }
int main()
{
	int n,x,y,max_party[5],max_partx[5],kc,k;
	double d1,d2;
	maxpoint p_partx[5],p_party[5]; 
	scanf("%d",&n);
	for (int i=0; i<n; i++)
	{
		scanf("%d%d",&x,&y);
		kc=disO(x,y); k=partx(y);
		if (kc>max_partx[k]) 
		{
			max_partx[k]=kc;
			p_partx[k].max_x=x;
			p_partx[k].max_y=y;
		}
		kc=disO(x,y); k=party(x);
		if (kc>max_party[k]) 
		{
			max_party[k]=kc;
			p_party[k].max_x=x;
			p_party[k].max_y=y;
		}
	}
	d1=dis(p_party[1].max_x,p_party[1].max_y,p_party[2].max_x,p_party[2].max_y);
	d2=dis(p_partx[1].max_x,p_partx[1].max_y,p_partx[2].max_x,p_partx[2].max_y);
	if (d1>d2) printf("%0.4lf",d1);
	else printf("%0.4lf",d2);
}
