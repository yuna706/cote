#include<stdio.h>
int main() {
	int a[10];
	int b;

	for (b = 0; b < 10; b++)
	{
		scanf_s("%d", &a[b]);
		if (a[b]==0)
		{
			break;
		}
	}
	for (b = b-1; b >=0; b--)
	{
		printf("%d \n", a[b]);
	}
}