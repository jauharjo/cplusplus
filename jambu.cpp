Algoritma dan Pemrograman
19-IF-04
03 Notasi

Bayu Setiaji
Oct 1, 2018 (Edited Oct 2, 2018)
Pengenalan notasi algoritma:
1. Kalimat deskriptif
2. Flowchart / Bagan alir
3. Pseudocode

03 Notasi.pptx
PowerPoint

jambu.cpp
C++

me.cpp
C++

myid.cpp
C++

segitiga.cpp
C++
Class comments

/*
 * program: jambu.cpp
 * Menggunakan escape char \b
 *
 * oleh: 18-IF-01
 * 2018
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	system("cls");

	const int harga = 15000;

	cout << "-- Jual Jambu --\n";
	cout << "   Harga Rp. " << harga << "/kg\n\n";

	int beli;
	cout << "   Beli :     kg\b\b\b\b\b\b";
	cin >> beli;

	const int bayar = beli * harga;
	cout << "   Bayar: Rp. " << bayar << "\n\n";

	return 0;
}
jambu.cpp
Displaying jambu.cpp.
