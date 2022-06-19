#include <stdio.h>

int main(){
    int n;
	scanf("%d",&n);
    
    for(int i = 2; i <= n; i++){
    	if (n%i==0) printf("%d ",i);
        while(n % i == 0)n /= i;
        }
}
