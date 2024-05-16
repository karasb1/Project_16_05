#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	cout << "Enter first number of range: ";
	cin >> a;
	cout << "Enter second number of range: ";
	cin >> b;
	if (a > b)
	{
		d = a;
		a = b;
		b = d;
	}
	while (true)
	{
		cout << "Enter number: ";
		cin >> c;
		if (c >= a && c <= b)
		{
			break;
		}
		else
		{
			continue;
		}
	}

	return 0;
}