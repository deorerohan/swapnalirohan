#include <stdio.h>
void PrintValue(int*);
void main()
{
	int i = 10;
	printf("%d\n", i);

	int *ptr_i = &i;
	printf("%d\n", ptr_i);
	printf("%d\n", &i);
	printf("%d\n", *ptr_i);
//	PrintValue(&i);

	int j[2];
	PrintValue(&j[0]);

}

void PrintValue(int *a)
{
	printf("%d\n", *a);
	a++;
}
