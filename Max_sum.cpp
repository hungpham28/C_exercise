//#include<iostream>
//#include<stdio.h>
//using namespace std;
//int main()
//{
//	int n,x,a;
//	cin >> n >> x;
//	cin >> a;
//	int max_sum=a*x;
//	int min_sum_a=0;
//	int sum_a1,sum_a2=a*x;
//	for (int i=1; i<n; i++)
//		{
//			cin>> a;
//			sum_a1=sum_a2;
//			sum_a2=sum_a1+a*x;
//			if (sum_a2-min_sum_a > max_sum)
//			{
//				max_sum=sum_a2-min_sum_a;
//				if (min_sum_a > sum_a1) min_sum_a=sum_a1;
//			}
//		}
//	cout << max_sum;
//}
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{

	int sum,n,q,a,L,R;
	unsigned int sum_a[100001];
	cin >> n >> q;
	sum_a[0]=0;
	for (int i=1; i<=n; i++)
		{
			cin>> a;
			sum_a[i]=sum_a[i-1];
			if (a>0) sum_a[i]+=a;
		}
	for (int i=1; i<=q; i++)
		{
			cin>>L>>R;
			cout << sum_a[R]-sum_a[L-1]<<"\n";
		}
}

