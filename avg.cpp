/*
 * program: average.cpp
 * menghitung rata-rata dari 10 input
 * bilangan
 *
*/
#include <iostream>

using namespace std;

int main()
{
	double sum = 0;

	for(int i = 0; i < 10; ++i)
	{
		double inp;

		cout << "input: ";
		cin >> inp;

		sum += inp;
	}

	const double avg = sum / 10;
	cout << "average: " << avg;

	return 0;
}
