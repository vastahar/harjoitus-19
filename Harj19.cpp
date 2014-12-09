// HARJOITUS 19
// Harri Vastamäki
// IIOS14S1

#include<iostream>
using namespace std;

const int MAX_TAULU = 5;

int main()
{
	int nopeus[MAX_TAULU] = { 0, 0, 0, 0, 0 };
	int ind = 0;
	int summa;
	int karvo;
	int input;

	cout << "\nNopeusmittari, anna negatiivinen luku lopettaaksesi\n" << endl;

	do
	{
		cout << "Anna nopeus: ";
		cin >> nopeus[ind];
		input = nopeus[ind];
		summa = nopeus[0] + nopeus[1] + nopeus[2] + nopeus[3] + nopeus[4];
		karvo = summa / MAX_TAULU;
		if (input >= 0)
		{
			cout << " => " << karvo << " km/h" << endl;
		}

		ind++;
		if (ind>4)
		{
			ind = 0;
		}

	} while (input >= 0);
}