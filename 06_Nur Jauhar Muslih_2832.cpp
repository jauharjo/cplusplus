/*
Tugas Algoritma Pemrograman IF 04
Membuat Program Mengitung Nilai Deviasi dengan 10 Angka-Angka Acak dari Sebuah Array
Karena Angka yang Digunakan Acak Maka Hasil Selalu Berubah
*/
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <ctime>
#include <cmath>
#include <windows.h>

float deviasi(float angka[]);
using namespace std;

int main()
{
	const int size = 10;	//ukuran array
	float angka[size];	//array

	srand(time(NULL));
	//Memasukkan bilangan acak ke array
	for(int i = 0; i < size; ++i)
	{
		angka[i] = rand() % 1000 + 1;
	}

	cout<< "-----Mencari Standar Deviasi dari Angka-Angka Acak-----\n\n";
	cout<< "=======================================================\n";
	cout<< "Bilangan acaknya :\n";//Menampilkan bilangan acak terlebih dahulu
	for (int i = 0; i < size; ++i)
	{
		cout << angka[i] << ' ';
		Sleep(100);
	}

    cout<< "\n=======================================================\n";
    Sleep(300);
	cout<< "Standard Deviasinya : \n" << deviasi(angka);//Kemudian baru ditampilkan nilai  standar deviasinya
	Sleep(200);
    cout<< "\n=======================================================\n\n";
}

// Perhitungan Standar Deviasi menggunakan rumus yang ada di cmath
float deviasi(float angka[])
{
    float sum = 0.0, mean, standardDeviation = 0.0;
    int i;
    for(i = 0; i < 10; ++i)
    {
        sum += angka[i];
    }
    mean = sum/10;
    for(i = 0; i < 10; ++i)
        standardDeviation += pow(angka[i] - mean, 2);

    return sqrt(standardDeviation / 10);
}
