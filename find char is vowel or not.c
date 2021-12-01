//WAP to find char is vowel or not
#include<stdio.h>
int main(){
	char a;
	printf("Enter a character\n");
	scanf("%c",&a);
	switch(a){
		case 'a':
		case 'i':
		case 'o':
		case 'u':
		case 'e':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		printf("You have entered a vowel");
		break;
		default:
			printf("You have entered a consonent");
	}
	return 0;
}
