//WAP use string.h
#include<stdio.h>
#include<string.h>
int main(){
	char n[200]="Tiya & Divya";
	printf("%s\n",strlwr(n));
	
	printf("%s\n",strupr(n));
	
	printf("%s\n",strrev(n));
	
	printf("%d\n",strlen(n));
	
	return 0;
}
