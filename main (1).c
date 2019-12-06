#include<stdio.h>
int main()
{
	int p,c,m,tot;
	float avg;
	printf("\n Enter marks in physics chemistry and maths");
	scanf("%d%d%d",&p,&c,&m);
	tot=p+c+m;
	avg=(float)tot/3; // Explicit Typecasting
	printf("Total marks:%d",tot);
	printf("Average:%f",avg);
}
