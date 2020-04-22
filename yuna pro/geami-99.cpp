/*40~50ºÐ ¤Ð¤Ð*/
#include<stdio.h>
int main() {
	int miro[10][10];

	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			scanf("%d", &miro[i][j]);
		}
	}

	int a = 1, b = 1;
	
	while (true) {

		miro[a][b] = 9;
		b++;

		if (miro[a][b] != 0) {
			b--;
			a++;
		}
		if (miro[a][b] == 2)
		{
			miro[a][b] = 9;
			break;
		}
	}

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%d ", miro[i][j]);
		}
		printf("\n");
	}
}