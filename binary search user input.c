//Binary search (user input)
#include<stdio.h>
int main()
{	int arr[50],n,target;
	printf("enter the size of array ");
	scanf("%d",&n);
		for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
		}
		
	int a;
	printf("enter target value ");
	scanf("%d",&a);	
	
	int low=0,mid;
	int high=n-1;
	while(low <= high){
		mid = (low + high)/2;
		if (a == arr[mid]){
			printf("Value at %d",mid);
			break;
		}
		else if (a > arr[mid]){
			low = mid+1;
		}
		else if(a < arr[mid]){
			high = mid-1;
		}
	}	
	return 0;
} 
