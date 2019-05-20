#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int number, A;
	char text[500], Rev[500];

	cout << "Input number of letters inside the array: \n";
	cin >> number;
	cout << number << " characters \n";

	cout << "Input " << number << " characters: \n";

	for ( A = 0; A < number; A++ )
	{
		cin >> text[A];
	}

	for ( A = 0; A < number; A++ )
	{
		Rev[A] = text[number-A-1];
	}

	cout << "Reverse Order: \n";

	for ( A = 0; A < number; A++ )
	{
		cout << Rev[A] << " ";
	}

	_getch();
	return 0;
}
