#include<iostream>
int main() {
	int h, w; //세로, 가로
	int n; //막대 개수
	int l[11];
	int x[11], y[11]; //길이, 좌표(x,y)
	bool d[11]; //방향 0이면 가로, 1이면 세로
	
	int pan[101][101];

	std::cin >> h >> w >> n;
	
	for (int i = 1; i <= n; i++)
	{
		std::cin >> l[i] >> d[i] >> x[i] >> y[i];
	}

	//초기화
	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= w; j++)
		{
			pan[i][j] = 0;
		}
	}


	for (int i = 1; i <= n; i++)
	{
		int s = 0;

		if (d[i] == 0)
		{
			for (int j = 1; j <= l[i]; j++)
			{
				pan[x[i]][y[i] + s] = 1;
				s++;
			}
		}
		else if (d[i] == 1){
			for (int j = 1; j <= l[i]; j++)
			{
				pan[x[i] + s][y[i]] = 1;
				s++;
			}
		}
	}

	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= w; j++)
		{
			std::cout << pan[i][j] << " ";
		}
		std::cout << "\n";
	}
}