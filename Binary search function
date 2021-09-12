//Binary search function

#include<stdio.h>
void search()
{	int arr[50],n,target;
	printf("Enter the size of array and array in ascending order ");
	scanf("%d",&n);
		for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
		}
		
	int a;
	printf("Enter target value ");
	scanf("%d",&a);	
	
	int low=0,mid;
	int high=n-1;
	while(low <= high){
		mid = (low + high)/2;
		if (a == arr[mid]){
			printf("Value at %d \n\n",mid);
			break;
		}
		else if (a > arr[mid]){
			low = mid+1;
		}
		else if(a < arr[mid]){
			high = mid-1;
		}
	}	
} 
int main()
{	search();
	search();
	search();
	return 0;
 } 
