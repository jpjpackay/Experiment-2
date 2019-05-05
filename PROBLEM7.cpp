#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int a, b;

int main()
{
    do
	{
        cout << "Enter a number: ";
        cin >> a;
        b=0;
        
        for(int i=0;i<=a;i++)
		{    
            if (a <= 0)
			{
                cout<<"Thank you!"<<endl;
                break;
            }
            else
			{
				b = b + i;
            }
        }
        if(a>0)
            cout<<"The sum of all whole numbers from 1 to "<< a <<" is "<< b <<endl;
    }
	while(a>0);
    
    return 0;
}
