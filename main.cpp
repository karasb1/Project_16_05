#include <iostream>
using namespace std;

//Написати імітацію касового апарата для магазину, що торгує новорічними товарами.
// Касир має вибрати товар зі списку, ввести його кількість, потім вибрати наступний товар.
// Після завершення введення вивести на екран усю суму покупки. Передбачити наявність знижки.
// У списку товарів має бути не менше 4-х товарів, має відображатися їхня ціна.
// Передбачити дані, що вводяться неправильно.

//Реалізувати можливість обслуговування кількох клієнтів підряд.
//Зберігання загальної виручки магазину.
//Обмежити кількість товару в магазині.


int main()
{
	int bells = 5;
	int fairy_lights = 4;
	int gingerbread = 10;
	int tangerines = 15;
	int revenue = 0;
	do {
		int index;
		cout << "1 - Bells - 3$" << endl;
		cout << "2 - Fairy_lights - 5$" << endl;
		cout << "3 - Gingerbread - 1$" << endl;
		cout << "4 - Tangerines - 4$" << endl;
		cout << "5 - Next buyer" << endl;
		cout << "6 - Exit" << endl;
		cout << "Select the product : ";
		cin >> index;
		if (index == 1)
		{
			int number_b;
			cout << "Enter the number of bells : ";
			cin >> number_b;
			if (bells >= number_b)
			{
				revenue += number_b * 3;
				bells -= number_b;
			}
			else
			{
				cout << "There are " << bells << endl;
			}
		}
		else if (index == 2)
		{
			int number_f;
			cout << "Enter the number of fairy_lights : ";
			cin >> number_f;
			if (fairy_lights >= number_f)
			{
				revenue += number_f * 5;
				fairy_lights -= number_f;
			}
			else
			{
				cout << "There are " << fairy_lights << endl;
			}
		}
		else if (index == 3)
		{
			int number_g;
			cout << "Enter the number of gingerbread : ";
			cin >> number_g;
			if (gingerbread >= number_g)
			{
				revenue += number_g;
				gingerbread -= number_g;
			}
			else
			{
				cout << "There are " << gingerbread << endl;
			}
		}
		else if (index == 4)
		{
			int number_t;
			cout << "Enter the number of tangerines : ";
			cin >> number_t;
			if (tangerines >= number_t)
			{
				revenue += number_t * 4;
				tangerines -= number_t;
			}
			else
			{
				cout << "There are " << tangerines << endl;
			}
		}
		else if (index == 5)
		{
			continue;
		}
		else if (index == 6)
		{
			cout << "Revenue = " << revenue;
			break;
		}
		else
		{
			cout << "Error";
		}
		cout << endl;

	} while (true);

	return 0;
}