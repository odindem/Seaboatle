#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	srand(time(NULL));
	char sea[11][11];
	char sea2[11][11];
	int k1 = 0, k2 = 0, k3 = 0, k4 = 0;
	for (int i = 0; i < 11; i++)
		for (int j = 0; j < 11; j++)
		{
			sea[i][j] = 0;
			sea2[i][j] = 0;
		}

	for (int i = 0; i < 10; i++)
	{
			sea[i][10] = 48 + i;
			sea[10][i] = 65 + i;
			sea2[i][10] = 48 + i;
			sea2[10][i] = 65 + i;
	}
	
	while (k4 != 1)
	{
		int rando = rand() % 4 + 1;
		int x = rand() % 10;
		int y = rand() % 10;



		if (x == 4 || x == 5 )
		{
			if (y == 4 || y == 5)
			{

				if (rando == 1)
				{
					for (int i = 0; i < 4; i++)
						sea2[x - i][y] = 178;
					k4++;
				}
				if (rando == 2)
				{
					for (int i = 0; i < 4; i++)
						sea2[x + i][y] = 178;
					k4++;
				}
				if (rando == 3)
				{
					for (int i = 0; i < 4; i++)
						sea2[x][y - i] = 178;
					k4++;
				}
				if (rando == 4)
				{
					for (int i = 0; i < 4; i++)
						sea2[x][y + i] = 178;
					k4++;
				}
			}
		}
		else if (x > 5 && y > 5)
		{
			if (rando % 2 == 0)
			{
				for (int i = 0; i < 4; i++)
					sea2[x - i][y] = 178;
				k4++;
			}
			else
			{
				for (int i = 0; i < 4; i++)
					sea2[x][y - i] = 178;
				k4++;
			}

		}
		else if (x > 5 && y < 4)
		{
			if (rando % 2 == 0)
			{
				for (int i = 0; i < 4; i++)
					sea2[x - i][y] = 178;
				k4++;
			}
			else
			{
				for (int i = 0; i < 4; i++)
					sea2[x][y + i] = 178;
				k4++;
			}

		}
		else if (x < 4 && y < 4)
		{
			if (rando % 2 == 0)
			{
				for (int i = 0; i < 4; i++)
					sea2[x + i][y] = 178;
				k4++;
			}
			else
			{
				for (int i = 0; i < 4; i++)
					sea2[x][y + i] = 178;
				k4++;
			}
		}
		else if (x < 4 && y >6)
		{
			if (rando % 2 == 0)
			{
				for (int i = 0; i < 4; i++)
					sea2[x + i][y] = 178;
				k4++;
			}
			else
			{
				for (int i = 0; i < 4; i++)
					sea2[x][y - i] = 178;
				k4++;
			}
		}
	}

	//while (k3 != 1)
	//{
	//	int rando = /*rand() % 4 + */1;
	//	int x = rand() % 10;
	//	int y = rand() % 10;
	//	if (rando==1)
	//	{
	//		int tr = 0;
	//		for(int i=x;i<;i++, tempx++)
	//			for (int j = 0, int tempy=0; j < 11; j++, tempy++)
	//			{
	//				
	//				tr += sea2[(x - 1) + tempx][(y - 1) + tempy];

	//			}
	//		if (tr != 0)
	//		{
	//			for (int i = 0; i < 3; i++)
	//				sea2[x+i][y] = 178;
	//			k3++;
	//		}
	//	}
	//}
	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			/*cout << sea[i][j];*/
			cout << sea2[i][j];

		}
		cout<<endl;
	}
		
	
			
	
	

	return 0;
}

	
