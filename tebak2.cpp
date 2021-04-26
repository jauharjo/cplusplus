Algoritma dan Pemrograman
19-IF-04
04 Keputusan

Bayu Setiaji
Oct 7, 2018 (Edited Oct 8, 2018)
1. Struktur IF
2. Struktur IF-ELSE
3. Struktur IF-ELSE-IF
4. Struktur SWITCH

04 Keputusan.pptx
PowerPoint

nilai-if.cpp
C++

nilai-switch.cpp
C++

tebak.cpp
C++

dice.cpp
C++

login.cpp
C++
Class comments

/*
 * program tebak angka
 * akan dipilih sebuah angka secara acak
 * kemudian user diminta untuk menebak.
 *
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	// fungsi srand() memungkinkan angka acak
	// yang dihasilkan setiap program dijalankan
	// selalu berbeda
	srand(time(NULL));
	// fungsi rand() menghasilkan bilangan acak.
	const int rand_num = rand() % 10 + 1;

	int guess_num;
	cout << "Tebak: ";
	cin >> guess_num;

	if(guess_num > rand_num)
		cout << "Tebakan terlalu besar\n";
	else if(guess_num < rand_num)
		cout << "Tebakan terlalu kecil\n";
	else
		cout << "Tebakan benar\n";

	cout << "Angka acak '" << rand_num << "'\n";

	return 0;
}

tebak.cpp
Displaying tebak.cpp.
