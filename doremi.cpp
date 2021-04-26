/*
 * program: doremi.cpp
 * simulasi nada
 *
*/

#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;

int main()
{
	char note;
	int freq;

	do
	{
		note = getch();
		cout << note << ' ';

		switch(note)
		{
			case 'c':
				freq = 261;
				break;
			case 'd':
				freq = 293;
				break;
			case 'e':
				freq = 329;
				break;
			case 'f':
				freq = 349;
				break;
			case 'g':
				freq = 392;
				break;
			case 'a':
				freq = 440;
				break;
			case 'b':
				freq = 493;
				break;
			default:
				freq = 0;
				break;
		}

		Beep(freq, 500);
	} while(note != ' ');

	return 0;
}
