/*
 * program konversi nilai
 * menggunakan struktur SWITCH
 *
 * nilai > 8: A
 *       > 6: B
 *       > 4: C
 *       > 0: D
 *   default: E
 *
*/

#include <iostream>

using namespace std;

int main()
{
	int n_angka;
	char n_huruf;

	cout << "Nilai angka: ";
	cin >> n_angka;

	switch(n_angka)
	{
	case 10:
	case 9:
		n_huruf = 'A';
		break;
	case 8:
	case 7:
		n_huruf = 'B';
		break;
	case 6:
	case 5:
		n_huruf = 'C';
		break;
	case 4:
	case 3:
	case 2:
	case 1:
		n_huruf = 'D';
		break;
	default:
		n_huruf = 'E';
	}

	cout << "Nilai huruf: " << n_huruf;

	return 0;
}
