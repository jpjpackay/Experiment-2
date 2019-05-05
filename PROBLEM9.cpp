#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	
int a, b, x, y;
	
cout << "How many rows: ";
cin >> a;

cout << "How many columns: ";  	
cin >> b;

for (x = 1; x <= a; x++ )
{
for (y = 1; y <= b; y++ )
	{
	if (x == 1 || x == a || y == 1 || y == b )
	cout << "*";
	
	else 
	
	cout << "*";
	}

	cout << "\n";
}

return 0; 
}
