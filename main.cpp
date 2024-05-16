#include <iostream>
using namespace std;

int main()
{
	int col, row;
	cout << "Enter row: ";
	cin >> row;
	cout << "Enter col: ";
	cin >> col;
	if (row % 2 == 0) {
		for (size_t i = 0; i < (row / 2); i++)
		{
			for (size_t j = 0; j < col; j++)
			{
				if (j >= i && i+j < col) {
					cout << "*" << " ";
				}
				else {
					cout << "  ";
				}
			}
			cout << endl;
		}
	}
	if (row % 2 != 0) {
		for (size_t i = 0; i < (row / 2 + 1); i++)
		{
			for (size_t j = 0; j < col; j++)
			{
				if (j >= i && i + j < col) {
					cout << "*" << " ";
				}
				else {
					cout << "  ";
				}
			}
			cout << endl;
		}
	}

	return 0;
}