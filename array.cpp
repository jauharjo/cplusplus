/*
 * program: arr1.cpp
 * Demo deklarasi array dan mengakses array
 *
 * oleh: 18-IF-01
 * 2018
 *
*/

#include <iostream>

using namespace std;

int main()
{
	// konstanta untuk ukuran array
	const int SIZE = 5;

	// deklarasi array bertipe double
	double ipk[SIZE] = {3.9, 2.5, 3.0, 1.1, 3.2};

	// mengakses array menggunakan perulangan:
	// 1. menggunakan nomor index
	cout << "IPK: ";
	for(int i = 0; i < SIZE; ++i)
		cout << ipk[i] << ' ';

	// 2. menggunakan struktur 'for each'
	//    struktur for khusus untuk array
	//    menggunakan opsi -std=c++11
	cout << "\nIPK: ";
	for(double i : ipk)
		cout << i << ' ';

	// 3. menggunakan iterator
	//    iterator = penunjuk / pointer ke elemen array
	//    menggunakan opsi -std=c++11
	cout << "\nIPK: ";
	for(auto it = begin(ipk); it != end(ipk); ++it)
		cout << *it << ' ';

	return 0;
}
