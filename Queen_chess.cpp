#include<bits/stdc++.h>
using namespace std;
bool principan_diagonal[500],secondary_diagonal[500],tick_rows[105];
int n,column[105],dem;
bool check(int x, int y)
{
	if ((!principan_diagonal[x-y+n])&&(!secondary_diagonal[x+y])&&(!tick_rows[x])) return true;
	else return false;
}
void print_result()
{
	dem++;
	for (int j=1; j<n; j++)
		printf("%d ",column[j]);
	printf("%d\n",column[n]);
}
void try_queen(int x0, int y0)
{
	for (int row=1; row<=n; row++)
		if (check(row,y0))
		{
			column[y0]=row;
			if (y0==n) { print_result(); break;}
			tick_rows[row]=true;
			principan_diagonal[row-y0+n]=true;
			secondary_diagonal[row+y0]=true;
			try_queen(row,y0+1);
			tick_rows[row]=false;
			principan_diagonal[row-y0+n]=false;
			secondary_diagonal[row+y0]=false;
		}
}
int main()
{
	scanf("%d",&n);
	dem=0;
	try_queen(1,1);
	printf("%d",dem);
	return 0;
}
