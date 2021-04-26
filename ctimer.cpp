/*
 * program: ctimer.cpp
 * Demo countdown timer
 * Menampilkan angka counter menggunakan
 * karakter ASCII 219 yang dirangkai berdasar
 * susunan peta 0 dan 1.
 *
*/

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	int map[9][5][5] = {
		// angka 0
		{
			{1, 1, 1, 1, 1},
			{1, 0, 0, 0, 1},
			{1, 0, 0, 0, 1},
			{1, 0, 0, 0, 1},
			{1, 1, 1, 1, 1}
		},
		// angka 1
		{
			{0, 1, 1, 0, 0},
			{0, 0, 1, 0, 0},
			{0, 0, 1, 0, 0},
			{0, 0, 1, 0, 0},
			{0, 1, 1, 1, 0}
		},
		// angka 2
		{
			{1, 1, 1, 1, 1},
			{0, 0, 0, 0, 1},
			{1, 1, 1, 1, 1},
			{1, 0, 0, 0, 0},
			{1, 1, 1, 1, 1}
		},
		// angka 3
		{
			{1, 1, 1, 1, 1},
			{0, 0, 0, 0, 1},
			{0, 1, 1, 1, 1},
			{0, 0, 0, 0, 1},
			{1, 1, 1, 1, 1}
		}
	};

	for(int c = 3; c >= 0; --c)
	{
		system("cls");

		cout << endl;
		Beep(410, 100);

		for(int x = 0; x < 5; ++x)
		{
			cout << '\t';
			for(int y = 0; y < 5; ++y)
			{
				if(map[c][x][y] == 1)
					cout << char(219);
				else if(map[c][x][y] == 0)
					cout << ' ';
			}
			cout << endl;
		}

		Sleep(2000);
	}

	return 0;
}
