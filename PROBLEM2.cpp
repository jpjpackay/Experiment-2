#include <iostream>
#include <conio.h>

using namespace std;

int main()

{	
	int usedGallons;
	float pastDue, totalCost;
	const float demCharge = 35, conCharge = 1.10; 

	cout << "Past Due amount: "; cin >> pastDue; 
	cout << "Current Month Consumption (Gallons): "; cin >>	usedGallons;
	
	if (pastDue > 0) 
		{
			totalCost = demCharge + (conCharge * usedGallons) + pastDue + 20;
			cout << "Total Balance: " << totalCost << endl;
		}

	else  
		{
			totalCost = demCharge + (conCharge * usedGallons);
			cout << "Total Balance: " << totalCost << endl;
		}

	_getch();
	return 0;
}

