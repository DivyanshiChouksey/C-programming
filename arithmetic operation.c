// WAP to perform all arthematic operation
#include<stdio.h>
int main()
{	int a=9,b=2;
	float c=9.0,d=2.0;
	int sum = a+b;
	int sub = a-b;
	int mul = a*b;
	int mod = a%b;
	float div = c/d;
	printf("addition of %d and %d = %d\n",a,b,sum);
	printf("subtraction of %d and %d = %d\n",a,b,sub);
	printf("multiplication of %d and %d = %d\n",a,b,mul);
	printf("modulus of %d and %d and %d = %d\n",a,b,mod);
	printf("division of %f and %f = %f",c,d,div);
	
	return 0;
}
