#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int x;
	float storeTemperatureA[7], storeTemperatureB[7], storeTemperatureC[7];

	for ( x = 0; x < 7; x++ )
	{
		cout << "Input all temperatures for a week of Province A: \n";
		cout << "Day" << x + 1 << endl; 
		cin >> storeTemperatureA[x];

		for ( x = 1; x < 7; x++ )
		{
			cout << "Day" << x + 1 << endl; 
			cin >> storeTemperatureA[x];
		}
	}

	for ( x = 0; x < 7; x++ )
	{
		cout << "Input all temperatures for a week of Province B: \n";
		cout << "Day" << x + 1 << endl; 
		cin >> storeTemperatureB[x];

		for ( x = 1; x < 7; x++ )
		{
			cout << "Day" << x + 1 << endl;
			cin >> storeTemperatureB[x];
		}

	}

	for ( x = 0; x < 7; x++ )
	{
		cout << "Input all temperatures for a week of Province C: \n";
		cout << "Day" << x + 1 << endl; 
		cin >> storeTemperatureC[x];

		for ( x = 1; x < 7; x++ )
		{
			cout << "Day" << x + 1 << endl;
			cin >> storeTemperatureC[x];
		}
	}
	cout << endl;

	for ( x = 0; x < 7; x++ )
	{
		cout << "Province A, Day " << x+1 << " :" << storeTemperatureA[x] << endl;
	}
	cout << endl;
	
	for ( x = 0; x < 7; x++ )
	{
		cout << "Province B, Day " << x+1 << " :" << storeTemperatureB[x] << endl;
	}
	cout << endl;
	
	for ( x = 0; x < 7; x++ )
	{
		cout << "Province C, Day " << x+1 << " :" << storeTemperatureC[x] << endl;
	}
	cout << endl;
	
	_getch();
	return 0;
}