#include<stdio.h>
#include<math.h>
long long factorial(int n){
	if(n==1) return 1;
	return factorial(n-1)*n;
}

long long sumFactorial(int n){
	long long s=0;
	long long tich=1;
	for (int i=1;i<=n;i++){
		n*=i;
		s+=tich*n;
	}
	return s;
}
void fibonaci(int n){
	long long a1=0;
	long long a2=1;
	for(int i=1;i<=n;i++){
		printf("%d\n",a2);
		a2=a1+a2;
		a1=a2-a1;
	} 
}
void printEven(){
	int i=1;
	for (int j=1;j<=10;j++){
		for(;i<=j*((100-2)/2+1)/10;i+=1) printf("%3.d ",i*2);
		printf("\n");
	}
}

int main(){
	printEven();
	fibonaci(5);
}
