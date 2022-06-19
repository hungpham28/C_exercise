#include<stdio.h>
#include<math.h>
void sortArray(int arr[1000], int n) {
	for (int i = 0; i < n-1; i++) {
		for(int j = i + 1; j < n; j++){
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
main()
{
	int a[1000],T,i;
	int max;
	scanf("%d",&T);
    for(int k=0;k<T;k++)
    { 
    	scanf("%d",&a[k]);
    }
    sortArray(a,T);
    i=T-1;
  while(i-2>=0)
    {	
		if (a[i]<a[i-1]+a[i-2] && abs(a[i]-a[i-1])<a[i-2]) {
			max=a[i]+a[i-1]+a[i-2];
			break;
		}
		else {
			max=0;
			i--;
		}	
	}
	printf("%d",max);
}
