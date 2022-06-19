#include<iostream>
#include<stdio.h>
#include<time.h>
using namespace std;
int swap(int &a,int &b)
{
	int temp=a; a=b; b=temp;
}
int main()
{
	int n,i,k,x,y;
	cin >> n;
	clock_t start = clock();// ham b?t d?u d?m th?i gian th?c hi?n chuong trình
	int a[n+1];
	for (i=1; i<=n; i++) a[i]=i;
	do
	{
		for (int i=1; i<=n; i++)
			cout<<a[i];
		cout<<"  ";
		i=n-1;
		while (a[i]>a[i+1]&&i>0) i--;
		if (i>0)
		{
			k=n;
			while (a[k]<a[i]) k--;
			swap(a[i],a[k]);
			x=i+1; y=n;
			while (x<y)
			{
				swap(a[x],a[y]);
				x++;
				y--;
			}
		}
		
	}while (i>0);
	clock_t finish = clock();// ham d?m th?i gian k?t thúc
	double duration = (double)(finish - start) / CLOCKS_PER_SEC;
	cout << "\n\n\n";
	printf("Thoi gian thuc thi: %.6lf", duration);
	system("pause");

}
