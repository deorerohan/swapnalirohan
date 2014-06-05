#include<stdio.h>
void main()
{
	int a;
	float b;
	double c,d;
 
	printf("Enter int,float and double");
	scanf("%d %f %lf",&a,&b,&c);
	printf("int a= %d",a);
	printf("float b=\n %f\n",b);
	printf("double c=%lf\n",c);
	d=(a+b+c);
	printf("addition=%lf",d);
}
