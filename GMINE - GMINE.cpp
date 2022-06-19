#include<bits/stdc++.h>
using namespace std;
struct val_time{
	int val,time;
	float BmA;
};
bool cmp(val_time x, val_time y)
{
	if(x.BmA < y.BmA) return true;
	if(x.time < y.time) return true;
//	if(x.val > y.val) return true;
	return false;
}
int main()
{
//	int N,T,sumtime,maxtime,k,time_end,point,sumval;
//	val_time A_B[3005];
//	scanf("%d%d",&N,&T);
//	for (int i=0; i<N; i++)
//	{
//		scanf("%d%d",&A_B[i].time,&A_B[i].val);
//		A_B[i].BmA=A_B[i].time*1.0 / A_B[i].val;
//	}
//	sort(A_B,A_B+N,cmp);
//	for (int i=0; i<N; i++)
//		printf("%f %d %d\n", A_B[i].BmA, A_B[i].time, A_B[i].val);
//	maxtime=0; k=0; sumval=0;
//	while (sumtime<T)
//	{
//		sumtime+=A_B[k].time;
//		if (maxtime<A_B[k].time)
//		{
//			point=k;
//			maxtime=A_B[k].time;
//		}
//		sumval+=A_B[k].val;
//		k++;
//	}
//	time_end=T-(sumtime-maxtime);
//	if(k<N-2)
//	for (int i=point;i<N;i++)
//	{	
//		time_end-=A_B[i].time;
//		if(time_end>0)
//			sumval+=A_B[point].val;
//		else time_end+=A_B[i].time;
//	}
//	printf("%d",sumval);
//	return 0;
map<string,string> str;
str["abc"]="gg";

}

