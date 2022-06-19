#include<stdio.h>

main()
{ 
    int a[50][50],n,t;
    long long i,j,s=0,t=0,u;
    scanf("%d",&t)
    while (t--)
    {
		scanf("%d",&n);
	    
		for(i=0,j=0,u=n-1;i<n;i++)
	    {	
	    
	       	s+=a[i][j];
	       	t+=a[u][i];
	       	j++;
	       	u--;
	    }
	    t+=s;if (n%2==1) t=t-a[n/2][n/2];
	printf("%lld\n",t%(1000000009));
	}
}
