#include<stdio.h>
int a[1005],b[1005];
void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];  
    int left = low;
    int right = high - 1;
    while(1){
        while(left <= right && arr[left] < pivot) left++;
        while(right >= left && arr[right] > pivot) right--;
        if (left >= right) break;
        swap(&arr[left], &arr[right]);
        left++;
        right--;
    }
    swap(&arr[left], &arr[high]);
    return left;
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {

        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
int main()
{
	int n;
	long long s=0;
	scanf("%d",&n);
    for (int i=0;i<n;i++) scanf("%d",&a[i]);
    for (int i=0;i<n;i++) scanf("%d",&b[i]);
    quickSort(a, 0, n-1);
    quickSort(b, 0, n-1);
	for (int i=0;i<n;i++)
		s+=a[i]*b[n-1-i];
	printf("%lld",s);
}
