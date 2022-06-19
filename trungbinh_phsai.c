#include <stdio.h>
double a[100000];
int main(){
    int n;
	scanf("%d",&n);
	double tong=0;
    for (int i=0;i<n;i++)
    {
    	scanf("%lf",&a[i]);
    	tong+=a[i];
	}
	double tb=tong*1.0/n,sphuongsai;
	for (int i=0;i<n;i++)
    {
    	sphuongsai+=(tb-a[i])*(tb-a[i]);
	}
	printf("%0.2lf %0.2lf",tb,sphuongsai/(n-1));
}
