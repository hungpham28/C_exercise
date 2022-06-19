#include <stdio.h>
unsigned long long k;
unsigned long long sqr(unsigned long long x) {
    return x*x;
}

unsigned long long pow(int  a, int b) {
    if (b == 0) return 1 % k;
    else
        if (b % 2 == 0)
            return sqr(pow(a, b/2)) % k;
        else
            return a * (sqr(pow(a, b/2)) % k) % k;
}

main ()
{
	unsigned long long m,n;
		scanf("%llu %llu %llu",&m,&n,&k); 
	printf("%llu",pow(m,n));
	return 0;
}
