#include<iostream>
int main() {
	int n;
	int x[11], y[11];

	int a[20][20];

	for (int i = 1; i < 20; i++)
	{
		for (int j = 1; j < 20; j++)
		{
			std::cin >> a[i][j];
		}
	}

	std::cin >> n;

	for (int i = 1; i <= n; i++)
	{
		std::cin >> x[i] >> y[i];
	}

	for (int i = 1; i <= n; i++)
	{
		/* 세로 뒤집기 */
		for (int j = 1; j < 20; j++)
		{
			if(a[j][x[i]] == 1) a[j][x[i]] = 0;
			else a[j][x[i]] = 1;
		}
		/* 가로 뒤집기 */
		for (int j = 1; j < 20; j++)
		{
			if(a[y[i]][j] == 1) a[y[i]][j] = 0;
			else a[y[i]][j] = 1;
		}
	}

	for (int i = 1; i < 20; i++)
	{
		for (int j = 1; j < 20; j++)
		{
			std::cout << a[i][j] <<" ";
		}
		std::cout << "\n";
	}
}
