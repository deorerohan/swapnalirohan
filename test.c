#include<stdio.h>
int Add(int a, int b);

void Addition(int x, int y, int z)
{
	z = x + y;
}


int main ()
{
int s = 3;
Addition(10, 20, s)


int x = 5; // memory allocated on stack

printf("%d\n", sizeof(int));
printf("%d\n", sizeof(char));
printf("%d\n", sizeof(float));
printf("%d\n", sizeof(double));
//int * t = malloc(sizeof(int));// memory allocation on heap
int y = 3;

	printf("%d\n", x);
	printf("%d\n", &x);
	//scanf("%d", &x);
	printf("%d\n", x);
	printf("%d\n", Add(1,6));
}


int Add(int a, int b)
{
	return a + b;
}
