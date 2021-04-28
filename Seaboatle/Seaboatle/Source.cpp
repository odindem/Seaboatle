#include<iostream>
#include<time.h>
#define COL 12
using namespace std;
void zapovnenya(char sea2[][COL], int size);
int main()
{
	srand(time(NULL));
	int choys=1;

	char sea[COL][COL];
	char sea2[COL][COL];
	char sea0[COL][COL];
	char sea01[COL][COL];
	char z = '|';
	for (int i = 0; i < COL; i++)
		for (int j = 0; j < COL; j++)
		{
			sea[i][j] = 0;
			sea2[i][j] = 0;
			sea0[i][j] = 0;
			sea01[i][j] = 0;
		}

	for (int i = 0; i < 12; i++)
	{
		sea01[i][0] = 179;
		sea01[0][i] = 196;
			sea0[i][0] = 179;
			sea0[0][i] = 196;
			sea[i][0] = 179;
			sea[0][i] = 196;
			sea2[i][0] = 179;
			sea2[0][i] = 196;
			sea[i][11] = 48 + i;
			sea[11][i] = 96 + i;
			sea2[i][11] = 48 + i;
			sea2[11][i] = 96 + i;
			sea0[i][11] = 48 + i;
			sea0[11][i] = 96 + i;
			sea01[i][11] = 48 + i;
			sea01[11][i] = 96 + i;
	}
	
	sea[11][11] = 0;
	sea[0][11] = 0;
	sea[10][11] = 48;
	sea[0][0] = 218;
	sea0[11][11] = 0;
	sea0[0][11] = 0;
	sea0[10][11] = 48;
	sea0[0][0] = 218;
	sea01[11][11] = 0;
	sea01[0][11] = 0;
	sea01[10][11] = 48;
	sea01[0][0] = 218;
	sea2[11][11] = 0;
	sea2[0][11] = 0;
	sea2[10][11] = 48;
	sea2[0][0] = 218;
	zapovnenya(sea2, COL);
	cout << "Oberit kilkist gravciv\n1 - Odin gravec\n2 - Dva gravci\n";
	cin >> choys;

	system("CLS");
	zapovnenya(sea0, COL);
	
	bool step=true;
	int ship = 20;
	int ship1 = 20;
	if (choys == 1)
	{
		while (true)
		{
			step = true;
			while (step)
			{

				step = 0;
				char v;
				int h, vint = 0;
				for (int i = 0; i < 12; i++)
				{
					
					for (int j = 0; j < 12; j++)
						cout << sea[i][j];

					cout << "\t\t";
					for (int k = 0; k < 12; k++)
						cout << sea0[i][k];

					cout << endl;
				}
				cout << endl << "Vedit koordinaty!\nBukva->" << endl;
				cin >> v;
				cout << "Cifra->" << endl;
				cin >> h;

				system("CLS");
				for (int i = 1, l = 97; i < 11; i++, l++)
					if ((int)v == l)
					{
						vint = i;
						break;
					}
				sea[h][vint] = sea2[h][vint];
				if (sea[h][vint] == -78)
				{
					ship--;
					step = 1;
				}
				else if (sea[h][vint] == 0)
					sea[h][vint] = 42;
				if (ship == 0)
				{
					cout << "Vitayo Vi vigrali!!!" << endl;
					break;
				}
			}

			step = true;
				while (step)
				{

					system("CLS");
					step = 0;
					int v,h;
					
					v = rand() % 10 + 1;
					h = rand() % 10 + 1;
					if (sea0[h][v] == 42 || sea0[h][v] == 42 == 219)
						step = 1;
					if (sea0[h][v] == -78)
					{
						ship1--;
						step = 1;
						sea0[h][v] = 219;
					}
					else if (sea0[h][v] == 0)
						sea0[h][v] = 42;
					if (ship1 == 0)
					{
						cout << "Vi prograli!" << endl;
						break;
					}
				}
			
			
			
		}
	}
	else if (choys == 2)
	{
		string player1="Player 1";
		string player2= "Player 2";
		cout << "Vedit imya pershogo gravcya" << endl;
		cin >> player1;
		cout << "Vedit imya drugogo gravcya" << endl;
		cin >> player2;
		system("CLS");
		while (true)
		{
			step = true;
			while (step)
			{
				step = 0;
				char v;
				int h, vint = 0;
				cout << "Grae gravec "<<player1 << endl;
				for (int i = 0; i < 12; i++)
				{
					
					for (int j = 0; j < 12; j++)
						cout << sea[i][j];

					cout << "\t\t";
					for (int k = 0; k < 12; k++)
						cout << sea0[i][k];

					cout << endl;
				}
				cout << endl << "Vedit koordinaty!\nBukva->" << endl;
				cin >> v;
				cout << "Cifra->" << endl;
				cin >> h;

				system("CLS");
				for (int i = 1, l = 97; i < 11; i++, l++)
					if ((int)v == l)
					{
						vint = i;
						break;
					}
				sea[h][vint] = sea2[h][vint];
				if (sea[h][vint] == -78)
				{
					ship--;
					step = 1;
					sea2[h][vint] = 219;
				}
				else if (sea[h][vint] == 0)
				{
					sea[h][vint] = 42;
					sea2[h][vint] = 42;
				}
				if (ship == 0)
				{
					cout << "Vitayo vigrav gravetc "<<player1 << endl;
					break;
				}
			}
			if (ship == 0||ship1==0)
			{
				
				break;
			}
			step = true;
			while (step)
			{
				step = true;
				while (step)
				{
					step = 0;
					char v;
					int h, vint = 0;
					cout << "Grae gravec " << player2 << endl;
					for (int i = 0; i < 12; i++)
					{
					
						for (int j = 0; j < 12; j++)
							cout << sea01[i][j];

						cout << "\t\t";
						for (int k = 0; k < 12; k++)
							cout << sea2[i][k];

						cout << endl;
					}
					cout << endl << "Vedit koordinaty!\nBukva->" << endl;
					cin >> v;
					cout << "Cifra->" << endl;
					cin >> h;

					system("CLS");
					for (int i = 1, l = 97; i < 11; i++, l++)
						if ((int)v == l)
						{
							vint = i;
							break;
						}
					sea01[h][vint] = sea0[h][vint];
					if (sea01[h][vint] == -78)
					{
						ship1--;
						step = 1;
						sea0[h][vint] = 219;
					}
					else if (sea01[h][vint] == 0)
					{
						sea01[h][vint] = 42;
						sea0[h][vint] = 42;
					}
					if (ship == 0)
					{
						cout << "Vitayo vigrav gravetc " << player2 << endl;
						break;
					}
				}
			}
			if (ship == 0 || ship1 == 0)
			{
				
				break;
			}
		}
	}
	
	

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
