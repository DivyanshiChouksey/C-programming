//WAP implement goto
#include<stdio.h>
int main(){
	for(int i=1;i<=10;i++){
		if (i==3){
			printf("Your num has 3:not allowed\n");
			goto abc;
		}
		printf("%d ",i);
	}
	printf("We are out of the loop ");
	abc:
		printf("Hey we are at abc ");	
	return 0;	
}
