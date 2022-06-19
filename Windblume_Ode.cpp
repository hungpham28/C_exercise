#include<iostream>
#include<stdio.h>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int n,t,a[100],sum,number_element;
bool kt_a[100];
bool check_composite(int k)
{
	if (k>3)
	{
		for (int i=2; i<=(int)sqrt(k); i++)
			if (k%i==0) return true;
	} 
	else return false;
	return false;
}
void print_result()
{
	cout<<n-number_element<<"\n";
	for (int i=0; i<n; i++) 
		if (!kt_a[i]) cout<<i+1<<" ";
			else kt_a[i]=false;
	cout<<"\n";
}
bool check_arr(int sum_arr, int number)
{
	for (int j=0; j<n; j++) 	
		if (number_element==number) 
		{
			if (check_composite(sum_arr))return true; 
				else return false;
		}
		else if (!kt_a[j]) 
		{
			sum_arr-=a[j];
			kt_a[j]=true;
			if (check_arr(sum_arr, number+1)) return true;
			sum_arr+=a[j];
			kt_a[j]=false;
		}
}
void for_arr()
{
	for (int i=0; i<n; i++)
	{
		number_element=i;
		if (check_arr(sum , 0)) 
			{
				print_result();
				break;
			}
	}
		
}
int main()
{	
//	cin >> t;
//	for (int i=0; i<t; i++)
//	{
//		cin >> n;
//		sum=0;
//		for (int l=0; l<n; l++) 
//		{
//			cin >> a[l];
//			sum+=a[l];
//		}
//		for_arr();
//		fflush(stdin);
//	}
	int a[1000];
	for (int i=1000; i>0;i--) a[i]=i-1000;
	sort(a,a+1000);
}
