#include<stdio.h>
int main() {
	int a=0, s = 0, c=0;
	float aver;


	while (a<100)
	{
		scanf_s("%d", &a);
		s += a;
		c++;
	}
	aver = s / c;
	printf_s("�հ� : %d \n", s);
	printf_s("��� : %.2f \n", aver);

}