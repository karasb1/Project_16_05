#include <iostream>
using namespace std;

int main()
{
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			if (j <= i) {
				cout << "*" << " ";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}

	return 0;
}