#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// #Course 4 Solution 12 
// Max of Two Numbers.

void ReadNumbers(int &Num1, int &Num2)
{
	cout << "Please Enter Num1 " << endl;
	cin >> Num1;

	cout << "Please Enter Num2" << endl;
	cin >> Num2;
}

int MaxOf2Numbers(int Num1,int Num2)
{
	if (Num1 > Num2)
		return Num1;
	else
		return Num2;
}

void PrintMax(int Max)
{
	cout << "The Max of Two Numbers is : " << Max << endl;
}

int main()
{
	int Num1, Num2;
	ReadNumbers(Num1, Num2);
	PrintMax(MaxOf2Numbers(Num1, Num2));

}

