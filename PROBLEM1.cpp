#include<iostream>

using namespace std;

int main()
{
int hours, total, cost;
char package;

cout << "Package A = 995/10hrs, Package B = 1495/20hrs, Package C = 1995 unli \n"; 
cout << "Addt'l_A = 20/hr, Addt'l_B = 10/hr \n\n"; 
cout << "Enter package (A, B, C) : ";

cin >> package;

if(package == 'A' || package == 'B' || package == 'C')
{

cout << "Input Used Hours: ";
cin >> hours;


if(package == 'A')
{
cost = 995;
if(hours < 10)
{   
total = cost;
}
else
total = ((hours - 10) * 20) + cost;

cout << "Amount Due: " << total << "\n\n";
}

if(package == 'B')
{
cost = 1495;
if(hours < 20)
total = cost;
else
total = ((hours - 20) * 10) + cost;

cout << "Amount Due: " << total << "\n\n";
}

if(package == 'C')
{
cost = 1995;
total = cost;
cout << "Amount Due: " << total << "\n\n";
}
}
else
cout << "Invalid input \n\n"
    << "A, B, or C must be Capital letters\n\n";

return 0;
}

