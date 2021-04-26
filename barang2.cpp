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
	const int MAX_SIZE = 50;
	      int count;

	// data barang:
	string n_barang[MAX_SIZE];	// nama
	int    h_barang[MAX_SIZE];	// harga

	for(int i = 0; i != MAX_SIZE; ++i)
	{
		count = i;
		string tmp_n_barang;
		string tmp_h_barang;

		system("cls");

		cout << "Nama : ";
		getline(cin, tmp_n_barang);

		if(tmp_n_barang == "")
			break;

		n_barang[i] = tmp_n_barang;

		cout << "Harga: ";
		getline(cin, tmp_h_barang);
		h_barang[i] = stoi(tmp_h_barang);
	}

	system("cls");
	cout << "\n-------------------------\n";
	cout << setw(3) << "NO" << setw(15) << "NAMA" << setw(7) << "HARGA";
	cout << "\n-------------------------\n";
	for(int i = 0; i != count; ++i)
	{
		cout << setw(3)  << i + 1;
		cout << setw(15) << n_barang[i];
		cout << setw(7)  << h_barang[i];
		cout << endl;
	}
	cout << "-------------------------\n";

	return 0;
}
