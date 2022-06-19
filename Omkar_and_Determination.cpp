//#include<iostream>
//#include<stdio.h>
//using namespace std;
//int main()
//{
//	bool result,kt;
//	cin>> n, m;
//	for (int i=0, i<n, i++)
//	{
//	 	kt=false;
//		for (int j=0, j<m, j++)
//	 		{
//				cin >>a[i][j];
//				if (a[i][j]==".") kt=true;
//			}
//		if (!kt) result=false
//	}
//	cin>> q;
//	for (int i=0, i<q, i++) cin>>x1[i],x2[i];
//	if (result)
//	{
//	+	column=0;
//		while (column<n)
//		{
//			for (int row=0, row<n, j++) 
//				if (a[row][column]==".") result=true;
//			if (kt==false) result=false;
//			column++;
//		}	
//	}
//
//}

#include<bits/stdc++.h>
 
 
using namespace std;
 
int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
 
  int n, m, q;
  cin >> n >> m;
  vector<string> a(n+1);
  for (int i = 0; i < n; i++) cin >> a[i];
  
  vector<int> bad(m);
 
  for (int j = 1; j < m; j++) {
    for (int i = 1; i < n; i++) {
      if (a[i][j-1] == 'X' && a[i-1][j] == 'X') bad[j] = 1;
    }
  }
 
  for (int i = 1; i < m; i++) bad[i] += bad[i-1];
 
  cin >> q;
  while (q--) {
    int l, r;
    cin >> l >> r;
    l--, r--;
    cout << (bad[l] == bad[r] ? "YES" : "NO") << '\n';
  }
 
  return 0;
}
//5 6
//....XX
//XX.XXX
//......
//....X.
//....X.
