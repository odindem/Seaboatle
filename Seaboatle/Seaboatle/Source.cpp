#include<iostream>
#include<time.h>
using namespace std;

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	wcout.imbue(locale(".1251"));
	wcin.imbue(locale(".866"));
	char sea[12][12];
	char sea2[12][12];
	int k1 = 0, k2 = 0, k3 = 0, k4 = 0;
	for (int i = 0; i < 12; i++)
		for (int j = 0; j < 12; j++)
		{
			sea[i][j] = 15;
			sea2[i][j] = 0;
		}

	for (int i = 0; i < 11; i++)
	{
			sea[i][0] = 8;
			sea[0][i] = 8;
			sea2[i][0] = 8;
			sea2[0][i] = 8;
			sea[i][11] = 47 + i;
			sea[11][i] = 65 + i;
			sea2[i][11] = 47 + i;
			sea2[11][i] = 65 + i;
	}
	sea[11][10] = 0;
	sea[11][11] = 0;
	
	while (k4 != 1)
	{
		int rando = rand() % 4 + 1;
		int x =rand() % 9+1;
		int y = rand() % 9+1;



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
	
	
	while (k3 != 2)
	{
		int tr = 0;
		int rando = rand() % 2+1;
		int x = rand() % 10+1;
		int y = rand() % 10+1;
		
		if (rando==1)
		{
			
				for (int i = x - 1; i < x + 4; i++)
				{
					for (int j = y - 1; j < y + 2; j++)
					{
						unsigned char f = sea2[i][j];
						tr += (int)f;
					}
				}
			
			if (tr == 0)
			{
				for (int i = 0; i < 3; i++)
					sea2[x+i][y] = 178;
				k3++;
			}
			else if (tr != 0)
			{
				tr = 0;
				for (int i = x - 1; i < x + 2; i++)
				{
					for (int j = y - 1; j < y + 4; j++)
					{
						unsigned char f = sea2[i][j];
						tr += (int)f;
					}
				}
				if (tr == 0)
				{
					for (int i = 0; i < 3; i++)
						sea2[x ][y+i] = 178;
					k3++;
				}
			}
			else if (tr != 0)
			{
				tr = 0;
				for (int i = x + 1; i > x - 2; i--)
				{
					for (int j = y + 1; j > y - 4; j--)
					{
						unsigned char f = sea2[i][j];
						tr += (int)f;
					}
				}
				if (tr == 0)
				{
					for (int i = 0; i < 3; i++)
						sea2[x][y + i] = 178;
					k3++;
				}
			}
		}
		else if (rando == 2)
		{
			for (int i = x + 1; i > x - 4; i--)
			{
				for (int j = y + 1; j > y - 2; j--)
				{
					unsigned char f = sea2[i][j];
					tr += (int)f;
				}
			}
			if (tr == 0)
			{
				for (int i = 0; i < 3; i++)
					sea2[x - i][y] = 178;
				k3++;
			}
			else if (tr != 0)
			{
				tr = 0;
				for (int i = x + 1; i > x - 2; i--)
				{
					for (int j = y + 1; j > y - 4; j--)
					{
						unsigned char f = sea2[i][j];
						tr += (int)f;
					}
				}
				if (tr == 0)
				{
					for (int i = 0; i < 3; i++)
						sea2[x][y + i] = 178;
					k3++;
				}
			}
			else if (tr != 0)
			{
				tr = 0;
				for (int i = x - 1; i < x + 2; i++)
				{
					for (int j = y - 1; j < y + 4; j++)
					{
						unsigned char f = sea2[i][j];
						tr += (int)f;
					}
				}
				if (tr == 0)
				{
					for (int i = 0; i < 3; i++)
						sea2[x][y + i] = 178;
					k3++;
				}
			}
		}
	}
	
	while (k2 != 3)
	{
		int tr = 0;
		int rando = rand() % 2 + 1;
		int x = rand() % 10 + 1;
		int y = rand() % 10 + 1;
		
		if (rando == 1)
		{

			for (int i = x - 1; i < x + 3; i++)
			{
				for (int j = y - 1; j < y + 2; j++)
				{
					unsigned char f = sea2[i][j];
					tr += (int)f;
				}
			}

			if (tr == 0)
			{
				for (int i = 0; i < 2; i++)
					sea2[x + i][y] = 178;
				k2++;
			}
			else if (tr != 0)
			{
				tr = 0;
				for (int i = x - 1; i < x + 2; i++)
				{
					for (int j = y - 1; j < y + 3; j++)
					{
						unsigned char f = sea2[i][j];
						tr += (int)f;
					}
				}
				if (tr == 0)
				{
					for (int i = 0; i < 2; i++)
						sea2[x][y + i] = 178;
					k2++;
				}
			}
			else if (tr != 0)
			{
				tr = 0;
				for (int i = x + 1; i > x - 2; i--)
				{
					for (int j = y + 1; j > y - 3; j--)
					{
						unsigned char f = sea2[i][j];
						tr += (int)f;
					}
				}
				if (tr == 0)
				{
					for (int i = 0; i < 2; i++)
						sea2[x][y + i] = 178;
					k2++;
				}
			}
		}
		else if (rando == 2)
		{
			for (int i = x + 1; i > x - 3; i--)
			{
				for (int j = y + 1; j > y - 2; j--)
				{
					unsigned char f = sea2[i][j];
					tr += (int)f;
				}
			}
			if (tr == 0)
			{
				for (int i = 0; i < 2; i++)
					sea2[x - i][y] = 178;
				k2++;
			}
			else if (tr != 0)
			{
				tr = 0;
				for (int i = x + 1; i > x - 2; i--)
				{
					for (int j = y + 1; j > y - 3; j--)
					{
						unsigned char f = sea2[i][j];
						tr += (int)f;
					}
				}
				if (tr == 0)
				{
					for (int i = 0; i < 2; i++)
						sea2[x][y + i] = 178;
					k2++;
				}
			}
			else if (tr != 0)
			{
				tr = 0;
				for (int i = x - 1; i < x + 2; i++)
				{
					for (int j = y - 1; j < y + 3; j++)
					{
						unsigned char f = sea2[i][j];
						tr += (int)f;
					}
				}
				if (tr == 0)
				{
					for (int i = 0; i < 2; i++)
						sea2[x][y + i] = 178;
					k2++;
				}
			}
		}
	}
	
	while (k1 != 4)
	{
		int tr = 0;
		int rando = rand() % 2 + 1;
		int x = rand() % 10 + 1;
		int y = rand() % 10 + 1;
		
		if (rando == 1)
		{

			for (int i = x - 1; i < x + 2; i++)
			{
				for (int j = y - 1; j < y + 2; j++)
				{
					unsigned char f = sea2[i][j];
					tr += (int)f;
				}
			}

			if (tr == 0)
			{
				for (int i = 0; i < 1; i++)
					sea2[x + i][y] = 178;
				k1++;
			}
			else if (tr != 0)
			{
				tr = 0;
				for (int i = x - 1; i < x + 2; i++)
				{
					for (int j = y - 1; j < y + 2; j++)
					{
						unsigned char f = sea2[i][j];
						tr += (int)f;
					}
				}
				if (tr == 0)
				{
					for (int i = 0; i < 1; i++)
						sea2[x][y + i] = 178;
					k1++;
				}
			}
			else if (tr != 0)
			{
				tr = 0;
				for (int i = x + 1; i > x - 2; i--)
				{
					for (int j = y + 1; j > y - 2; j--)
					{
						unsigned char f = sea2[i][j];
						tr += (int)f;
					}
				}
				if (tr == 0)
				{
					for (int i = 0; i < 1; i++)
						sea2[x][y + i] = 178;
					k1++;
				}
			}
		}
		else if (rando == 2)
		{
			for (int i = x + 1; i > x - 2; i--)
			{
				for (int j = y + 1; j > y - 2; j--)
				{
					unsigned char f = sea2[i][j];
					tr += (int)f;
				}
			}
			if (tr == 0)
			{
				for (int i = 0; i < 1; i++)
					sea2[x - i][y] = 178;
				k1++;
			}
			else if (tr != 0)
			{
				tr = 0;
				for (int i = x + 1; i > x - 2; i--)
				{
					for (int j = y + 1; j > y - 2; j--)
					{
						unsigned char f = sea2[i][j];
						tr += (int)f;
					}
				}
				if (tr == 0)
				{
					for (int i = 0; i < 1; i++)
						sea2[x][y + i] = 178;
					k1++;
				}
			}
			else if (tr != 0)
			{
				tr = 0;
				for (int i = x - 1; i < x + 2; i++)
				{
					for (int j = y - 1; j < y + 2; j++)
					{
						unsigned char f = sea2[i][j];
						tr += (int)f;
					}
				}
				if (tr == 0)
				{
					for (int i = 0; i < 1; i++)
						sea2[x][y + i] = 178;
					k1++;
				}
			}
		}
	}
	cout << "Почнемо гру!\nНатиснiть будь яку клавiшу для початку!" << endl;
	system("pause");
	system("CLS");
	int ship = 20;
	while (ship>0)
	{
		char v;
		int h, vint;
		for (int i = 0; i < 12; i++)
		{
			for (int j = 0; j < 12; j++)
			{
				cout << sea[i][j];
				/*cout << sea2[i][j];*/

			}
			cout << endl;
		}
		cout << "Ведiть координати!\nБуква->Цифра" << endl;
		cin >> v >> h;
		for (int i = 0, int l = 65; i < 10; i++, l++)
			if (v == l)
				vint = i;
		

	}
	
	

	return 0;
}

	
