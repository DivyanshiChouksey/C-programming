//WAP to find max value in an array(user input)

#include<stdio.h>
int main()
{ int n,i;
	int arr[50] = {};
	printf("Enter the size of array you want\n");
	scanf("%d",&n);
		for(i=0; i<n; i++)
		scanf("%d",&arr[i]);
		
	int max = arr[0];
		for(int i=1; i<5; i++)
		if(max < arr[i]){
			max = arr[i];
		}
		printf("Maximum value of given array is %d",max);
	return 0;
}
