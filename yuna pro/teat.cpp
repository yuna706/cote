#include<iostream>
int main() {
	int n;
	int x[11], y[11];

	bool a[20][20];

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

	for (int i = 1; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			a[i][j] ? 0 : 1;
		}
	}

	for (int i = 1; i < 20; i++)
	{
		for (int j = 1; j < 20; j++)
		{
			std::cout << a[i][j];
		}
		std::cout << "\n";
	}
}