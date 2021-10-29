//WAP to find sum of table of 1
 
#include<stdio.h>
int main ()
{ int i,sum=0;
  for( i=0; i<=50; i++){
	if (sum>=55)
		break;
	sum+=i;
	printf("%d\n",sum);
	}
  return 0;
}
