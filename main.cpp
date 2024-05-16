#include <iostream>
using namespace std;

int main()
{
	int col, row;
	cout << "Enter row: ";
	cin >> row;
	cout << "Enter col: ";
	cin >> col;
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			if (j >= i) {
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