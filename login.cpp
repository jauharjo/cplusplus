/*
 * program login
 * user id : nama
 * password: nim
 *
 * jika login berhasil, akan melakukan
 * konversi suhu
 *
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string usr, pwd;
	cout << "UserID  : ";
	cin >> usr;
	cout << "Password: ";
	cin >> pwd;

	// jika login bernilai true
	// maka akan dilakukan perhitungan
	// konversi suhu.
	if(usr == "john" && pwd == "0127")
	{
		system("cls");
		cout << " Konversi Suhu\n";
		double c;
		cout << " Suhu :    C\b\b\b\b";
		cin >> c;
		const double f = (9.0 / 5.0) * c + 32.0;
		cout << " Suhu : " << f << " F\n";
	}
	else
	{
		cout << "Login gagal..\n";
	}

	return 0;
}
