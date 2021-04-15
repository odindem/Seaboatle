#include<iostream>
#include<time.h>
#define COL 12
using namespace std;
void zapovnenya(char sea2[][COL], int size);
int main()
{
	srand(time(NULL));


	char sea[COL][COL];
	char sea2[COL][COL];
	
	for (int i = 0; i < COL; i++)
		for (int j = 0; j < COL; j++)
		{
			sea[i][j] = 0;
			sea2[i][j] = 0;
		}

	for (int i = 0; i < 11; i++)
	{
			sea[i][0] = 8;
			sea[0][i] = 8;
			sea2[i][0] = 8;
			sea2[0][i] = 8;
			sea[i][11] = 48 + i;
			sea[11][i] = 97 + i;
			sea2[i][11] = 48 + i;
			sea2[11][i] = 97 + i;
	}
	sea[11][10] = 0;
	sea[11][11] = 0;
	sea[0][11] = 0;
	sea[10][11] = 48;
	zapovnenya(sea2, COL);
	cout << "Pochnemo gru\nNatisnit bud yaku klavishu!" << endl;
	system("pause");
	system("CLS");
	int ship = 20;
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			
			cout << sea2[i][j];
			cout<< sea2[i][k];
			
			
				if (j == 0)
					cout << "\t\t";
		
		}
		cout << endl;
	}
	while (ship>0)
	{
		char v;
		int h, vint=0;
		for (int i = 0; i < 12; i++)
		{
			for (int j = 0; j < 12; j++)
			{
				cout << sea[i][j];
				

			}
			cout << endl;
		}
		cout <<endl<< "Vedit koordinaty!\nBukva->" << endl;
		cin >> v;
		cout << "Cifra->" << endl;
		cin >> h;
	
		system("CLS");
		for (int i = 1,  l = 97; i < 11; i++, l++)
			if ((int)v == l)
			{
				vint = i;
				break;
			}
		sea[h][vint] = sea2[h][vint];
		if (sea[h][vint] == -78)
			ship--;
		else if (sea[h][vint] == 0)
			sea[h][vint] = 42;

	}
	cout << "Vitayo Vi vigrali!!!" <<  endl;
	

	return 0;
}

void zapovnenya(char sea2[][COL], int size)
{
	int k1 = 0, k2 = 0, k3 = 0, k4 = 0;
	while (k4 != 1)
	{
		int rando = rand() % 4 + 1;
		int x = rand() % 9 + 1;
		int y = rand() % 9 + 1;



		if (x == 4 || x == 5)
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
		int rando = rand() % 2 + 1;
		int x = rand() % 10 + 1;
		int y = rand() % 10 + 1;

		if (rando == 1)
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
					sea2[x + i][y] = 178;
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
						sea2[x][y + i] = 178;
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
}
