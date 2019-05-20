#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
	int inp[10], a, b=10 ;
 	float total=0, average;
 	cout << setprecision(2) << fixed << showpoint;
 	
 	for (a = 0; a < 10; a++)
	{
		cout << "Enter a number: " << endl;
		cin >> inp[a]; 
	}
	
	for (a = 0; a < b; a++)
	{
		total = total + inp[a];
	}	
	cout << "Total =  " << total << endl;
	
	average = total/10;
	cout << "Average = " << average << endl;
	
	for (a = 1; a < b; ++a)
	{
		if (inp[0] < inp[a])
			inp[0] = inp[a];
	}
	cout << "Largest integer: " << inp[0] << "\n" << endl;
		
	_getch();
	return 0;
}