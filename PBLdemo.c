#include<stdio.h>
#include<windows.h>
long long factorial(int n){
	if(n<=1) return 1;
	return factorial(n-1)*n;
}

long long sumFactorial(int n){
	long long s=0;
	long long tich=1;
	for (int i=1;i<=n;i++){
		tich*=i;
		s+=tich;
	}
	return s;
}
void fibonaci(int n){
	long long a1=0;
	long long a2=1;
	for(int i=1;i<=n;i++){
		printf("fibo %d = %d\n",i,a2);
		a2=a1+a2;
		a1=a2-a1;
	} 
}
void printEven(){
	int i=0;
	for (int j=1;j<=10;j++){
		while(i<j*10) i+=2,printf("%3.d ",i);
		printf("\n");
	}
}

int main(){
	int option,isOption=1,n;
	int isContinue;
	do{
		printf("--------------------------Menu--------------------------\n");
		printf("1. Calculate n!\n");
		printf("2. Calculate 1! + 2! + ... + n!\n");
		printf("3. Print the first n Fibonacci numbers\n");
		printf("4. Print even numbers from 2 to 100 on 10 lines\n");
		printf("5. Exit\n");
		printf("********************************************************\n");
		printf("-->Enter option:");
		scanf("%d",&option);
		switch(option){
			case 1:
				printf("Enter n= "); scanf("%d",&n);
				printf("result: %d!=%lld\n",n,factorial(n));
				break;
			case 2:
				printf("Enter n= "); scanf("%d",&n);
				printf("result: %lld\n",sumFactorial(n));
				break;
			case 3:
				printf("Enter n= "); scanf("%d",&n);
				fibonaci(n);
				break;
			case 4:
				printEven();
				break;
			case 5:
				isOption=0;
				break;
			default:
				printf("This function could not be found!\n");
				break;	
		}
		printf("Do you want to continue? Press 1 (Yes) or 0 (No):");
		scanf("%d",&isContinue);
		if(isContinue==0) break;
		else if(isContinue==1) system("cls");
		else printf("Enter option again:")
	}while(isOption);
}
