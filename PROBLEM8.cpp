#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;
	cout<< "Multiplication Table of " << n << ":" << endl;
	
    for (int i = 1; i <= 10; ++i) {
        cout << i << " * " << n << " = " << i * n << endl;
    }
    
    return 0;
}
