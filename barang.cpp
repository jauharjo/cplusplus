/*
 * program: barang.cpp
 * Demo array untuk menyimpan data barang
 * di gudang.
 *
 * oleh: 18-IF-01
 * 2018
 *
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	const int SIZE = 5;

	// data barang:
	string n_barang[SIZE];	// nama
	int    h_barang[SIZE];	// harga

	for(int i = 0; i != SIZE; ++i)
	{
		string str_h_barang;

		system("cls");

		cout << "Nama : ";
		getline(cin, n_barang[i]);

		cout << "Harga: ";
		getline(cin, str_h_barang);
		h_barang[i] = stoi(str_h_barang);
	}

	system("cls");
	cout << "\n-------------------------\n";
	cout << setw(3) << "NO" << setw(15) << "NAMA" << setw(7) << "HARGA";
	cout << "\n-------------------------\n";
	for(int i = 0; i != SIZE; ++i)
	{
		cout << setw(3)  << i + 1;
		cout << setw(15) << n_barang[i];
		cout << setw(7)  << h_barang[i];
		cout << endl;
	}
	cout << "-------------------------\n";

	return 0;
}
