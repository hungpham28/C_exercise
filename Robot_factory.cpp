#include<bits/stdc++.h>
using namespace std;
int n,m,size_room,room[1000001],a[1001][1001],step[4][2]={{0,-1},{1,0},{0,1},{-1,0}};
bool tick[1001][1001];

void one_step(int x, int y)
{
	tick[x][y]=1;
	size_room++;
	for (int k=0; k<4; k++)
		if (!(a[x][y]&(1<<k)))
		{
			int dx=x+step[k][0], dy=y+step[k][1];
			if (dx<0||dx>n||dy<0||dy>m) continue;
			if (!tick[dx][dy]) one_step(dx,dy);
		}
}
int main()
{	
	cin >> n >> m;
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)
			scanf("%d",&a[i][j]);
	int count=0;
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)
			if (!tick[i][j]) 
			{
				size_room=0;
				one_step(i,j);
				room[count++]=size_room;
			}
	sort(room,room+count,greater<int>());
	for (int i=0; i<count; i++) printf("%d ",room[i]);
}
