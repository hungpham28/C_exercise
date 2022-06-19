#include <iostream>
#include <stdio.h>
#include<time.h>
using namespace std;
int n;
int a[10],b[10];
bool kt[10];
void printresult()
{
	for (int j=1; j<=n; j++)
		cout << b[j];
		cout << endl;
};
void look(int i)
{	
	if (i<=n)	
		for (int j=1; j<=n; j++) 
		{
			if (kt[j]==false) 
			{
				b[i]=a[j];
				kt[j]=true;
				look(i+1);
				kt[j]=false;
			}	
		}
		else printresult();
}
int main()
{
	cin>>n;
	clock_t start = clock();// ham b?t d?u d?m th?i gian th?c hi?n chuong trình
	for (int i=1; i<=n; i++) a[i]=i;
	look(1);
	clock_t finish = clock();// ham d?m th?i gian k?t thúc
	double duration = (double)(finish - start) / CLOCKS_PER_SEC;
	cout << "\n\n\n";
	printf("Thoi gian thuc thi: %.6lf", duration);
	system("pause");
	return 0;
}

