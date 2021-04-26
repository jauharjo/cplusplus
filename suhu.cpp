/*
 * program: suhu2.cpp
 * oleh   : IF-01
 * 2018
 *
 * Menghitung konversi suhu dari Celsius
 * ke Fahrenheit secara interaktif
 *
*/

#include <iostream>

using namespace std;

int main()
{
	double cel;

	cout << "Konversi Suhu" << endl;
	cout << "Celsius   : ";
	cin >> cel;


	const float reamur = (4.0 / 5.0) * cel;
	const double fah = (9.0 / 5.0) * cel + 32;

	cout << "Fahrenheit: " << fah << endl;
	cout << "Reamur : " << reamur << endl;
	cout << "Kelvin : " << 273 + cel <<endl;

	// tambahkan untuk Reamur dan Kelvin


	return 0;
}
