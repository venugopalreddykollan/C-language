#include<stdio.h>
int main()
{
	int a,b,x;
	printf("\n Enter two values:");
	scanf("%d%d",&a,&b);
	printf("\n Before swap a=%d \t b=%d",a,b);
	x=a;
	a=b;
	b=x;
	printf("\n After swap a=%d \t b=%d",a,b);
}
