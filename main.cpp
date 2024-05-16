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
		for (size_t i = 0; i < row/2; i++)
		{
			for (size_t i = 0; i < col; i++)
			{
				cout << "  ";
			}
			cout << endl;
		}

		for (size_t i = row / 2 ; i < row ; i++)
		{
			for (size_t j = 0; j < col; j++)
			{
				if (i >= j && i + j >= col-1) {
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
		for (size_t i = 0; i < row / 2; i++)
		{
			for (size_t i = 0; i < col; i++)
			{
				cout << "  ";
			}
			cout << endl;
		}

		for (size_t i = row / 2 ; i < row ; i++)
		{
			for (size_t j = 0; j < col; j++)
			{
				if (i >= j && i + j >= row - 1) {
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