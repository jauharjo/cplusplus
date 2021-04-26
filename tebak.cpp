/*
 * program tebak dadi
 * simulasi mengocok dadu, kemudian
 * user diminta untuk menebak.
 *
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <Windows.h>

using namespace std;

int main()
{
	string load_char = "\\|-/-";

	system("cls");
	cout << " Tebak Dadu\n";
	cout << " > tekan sembarang tombol\n";
	cout << "   untuk mengacak dadu";
	cin.get();
	cout << " > tunggu sebentar ";

	// progress, menampilkan tiap karakter
	// dalam string load_char secara bergantian
	// dalam durasi tertentu.
	for(int i = 0; i < 25; ++i)
	{
		for(int j = 0; j < load_char.length(); ++j)
		{
			cout << load_char[j] << '\b';
			Sleep(50);
		}
	}

	// mengacak angka
	srand(time(NULL));
	const int rand_num = rand() % 6 + 1;

	int guess_num;
	cout << endl;
	cout << " > tebak: ";
	cin >> guess_num;

	if(guess_num > rand_num)
		cout << " > tebakan terlalu besar\n";
	else if(guess_num < rand_num)
		cout << " > tebakan terlalu kecil\n";
	else
		cout << " > tebakan benar\n";

	cout << " > angka dadu '" << rand_num << "'\n";

	return 0;
}
