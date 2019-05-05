#include <iostream>

using namespace std;

int main()
{    
    int num1, num2, num3;

    cout << "Enter first number: ";
    cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	cout << "Enter third number: ";
	cin >> num3;

    if(num1 >= num2 && num1 >= num3)
    {
        cout << "\nThe LARGEST of the three numbers is: " << num1;
    }

    if(num2 >= num1 && num2 >= num3)
    {
        cout << "\nThe LARGEST of the three numbers is: "<< num2;
    }

    if(num3 >= num1 && num3 >= num2) {
        cout << "\nThe LARGEST of the three numbers is: " << num3;
    }

    return 0;
}

