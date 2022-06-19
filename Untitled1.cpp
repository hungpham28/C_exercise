#include<stdio.h>
double giaithua(double a){
	if (a<=1) return 1;
	return a*giaithua(a-1);
}
int main()
{
	double n;
	scanf("%lf",&n);
	printf("%0.lf",giaithua(n));
}
