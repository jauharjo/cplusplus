#include <iostream>
#include <windows.h>

using namespace std;

int main()
{

    cout<< "\n\t kjgglug..\n\t";

	for(int i = 0; i < 25; ++i)
	{
		cout << char(219);// Karakter ASCII nomor 219 untuk gambar balok

		cout << char(7);// Karakter ASCII nomor 7 untuk suara beep

		Sleep(250);// Delay 250ms
	}

	cout << "\n\t lhu...\n";
	cin.get();
}
