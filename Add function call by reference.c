//WAP to add function call by reference
#include<stdio.h>
void add(int a,int b)
{
	int c=a+b;
	printf("%d+%d=%d",a,b,c);
}

int main(){
	add(5,2);
	return 0;
}
