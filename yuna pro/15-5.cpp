#include<stdio.h>
int main() {
	int a = 0;

	while (a%3 == 0)
	{
		scanf_s("%d", a);
		printf("%d", a / 3);

	}
}