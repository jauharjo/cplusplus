/*
 * program: ganjil
 * menampilkan bilangan ganjil 1-100
 *
*/
#include <iostream>

using namespace std;

int main()
{
	int i = 1;


	do {
		cout << i << ' ';

		i += 2;
	} while(i <= 100);

	return 0;
}

int main()
{
	for(int i = 1; i < 100; i += 2)
	{
		cout << i << ' ';
	}

	return 0;
}

int main()
{
	int i = 1;

	while(i <= 100)
	{
		cout << i << ' ';

		i += 2;
	}

	return 0;
}
