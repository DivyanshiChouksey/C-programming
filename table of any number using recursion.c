//WAP to find table of any number using recursion
#include<stdio.h>
int i=1;
void table(int a){
	if(i<=10){
		printf("%d*%d=%d\n",a,i,a*i);
		i++;
		table(a);
	}
}
int main(){
	table(2);
	return 0;
}
